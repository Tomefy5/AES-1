#include "encryption.h"
#include <iostream>
#include <crypto++/aes.h>
#include <crypto++/modes.h>
#include <crypto++/filters.h>
#include <crypto++/cryptlib.h>

using namespace std;
using namespace CryptoPP;

string encrypt(string message)
{
    CryptoPP::byte key[AES::DEFAULT_KEYLENGTH] = {0x00}; // clé de chiffrement
    CryptoPP::byte iv[AES::BLOCKSIZE] = {0x00};          // vecteur d'initialization

    try
    {
        // Mode CBC
        CBC_Mode<AES>::Encryption encryption;
        encryption.SetKeyWithIV(key, sizeof(key), iv, sizeof(iv));

        string message_chiffre;
        StringSource(message, true, new StreamTransformationFilter(encryption, new StringSink(message_chiffre)));

        return message_chiffre;
    }
    catch (const Exception &e)
    {
        cerr << e.what() << endl;
    }

    return "";
}