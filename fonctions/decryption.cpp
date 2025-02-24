#include <string>
#include <iostream>
#include <crypto++/aes.h>
#include <crypto++/modes.h>
#include <crypto++/filters.h>
#include <crypto++/cryptlib.h>

using namespace std;
using namespace CryptoPP;

string decrypt(string message_chiffre)
{
    CryptoPP::byte key[AES::DEFAULT_KEYLENGTH] = {0x00};
    CryptoPP::byte iv[AES::BLOCKSIZE] = {0x00};

    try
    {
        CBC_Mode<AES>::Decryption decryption;
        decryption.SetKeyWithIV(key, sizeof(key), iv, sizeof(iv));

        string message;

        StringSource(message_chiffre, true, new StreamTransformationFilter(decryption, new StringSink(message)));

        return message;
    }
    catch (Exception &e)
    {
        cout << e.what() << endl;
    }

    return "";
}