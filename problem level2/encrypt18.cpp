#include <iostream>
using namespace std;
string ReadText()
{
    string text;
    cout << "Please enter Text?\n";
    getline(cin, text);

    return text;
}
string EncryptionText(string text, short Encryptionkye)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] + Encryptionkye);
    }
    return text;
}
string DecryptionText(string text, short Encryptionkye)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] - Encryptionkye);
    }
    return text;
}

int main()
{
    int Encryptionkye = 200;

    string AftarEncryptionText, AftarDecryptionText;
    string text = ReadText();
    AftarEncryptionText = EncryptionText(text, Encryptionkye);
    AftarDecryptionText = DecryptionText(AftarEncryptionText, Encryptionkye);

    cout << "\n Text Befor Encryption : ";
    cout << text << endl;
    cout << "\n Text After Encryption : ";
    cout << AftarEncryptionText << endl;
    cout << "\n Text After Decryption : ";
    cout << AftarDecryptionText << endl;
    return 0;
}