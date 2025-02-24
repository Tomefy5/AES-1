#include <iostream>
#include <crypto++/aes.h>
#include <crypto++/modes.h>
#include <crypto++/filters.h>
#include <crypto++/cryptlib.h>
#include <string.h>
#include "./fonctions/encryption.h"

using namespace CryptoPP;
using namespace std;
int main()
{
    string message = "Bonjour les gars, je suis un message crypté";
    string message_chiffre = encrypt(message);

    cout << message_chiffre << endl;
    
    return 0;
}