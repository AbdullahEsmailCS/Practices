#include <iostream>
#include<conio.h>
#include<string>
using namespace std;

string caesar_encrypt(string plaintext, int shift) {
    string ciphertext = "";
    int n = plaintext.length();
    for (int i = 0; i < n; i++) {
        char letter = plaintext[i];
        if (isalpha(letter)) {
            // Shift the letter by the specified amount
            char shifted_letter = ((letter - 'A' + shift) % 26) + 'A';
            ciphertext += shifted_letter;
        } else {
            ciphertext += letter;
        }
    }
    return ciphertext;
}

string caesar_decrypt(string ciphertext, int shift) {
    string plaintext = "";
    int n = ciphertext.length();
    for (int i = 0; i < n; i++) {
        char letter = ciphertext[i];
        if (isalpha(letter)) {
            // Shift the letter back by the specified amount
            char shifted_letter = ((letter - shift - 'A' + 26) % 26) + 'A';
            plaintext += shifted_letter;
        } else {
            plaintext += letter;
        }
    }
    return plaintext;
}

int main() {
    string plaintext = "A soldier is often not what he seems";
    int shift = 5;
    string ciphertext = caesar_encrypt(plaintext, shift);
    string decrypted_text = caesar_decrypt(ciphertext, shift);

    cout << "Plaintext: " << plaintext << endl;
    cout << "Shift: " << shift << endl;
    cout << "Ciphertext: "<<ciphertext << endl;
    cout << "Decrypted text: "<<decrypted_text << endl;
	getch();
    return 0;
}
