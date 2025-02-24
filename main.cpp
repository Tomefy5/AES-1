#include <iostream>
#include <crypto++/aes.h>
#include <crypto++/modes.h>
#include <crypto++/filters.h>
#include <crypto++/cryptlib.h>
#include <string.h>
#include "./fonctions/encryption.h"
#include "./fonctions/decryption.h"

using namespace CryptoPP;
using namespace std;
int main()
{
    string message = "Bonjour les gars, je suis un message crypté";
    string message_chiffre = encrypt(message);
    string real_mess = decrypt(message_chiffre);

    cout << real_mess << endl;
    
    return 0;
}