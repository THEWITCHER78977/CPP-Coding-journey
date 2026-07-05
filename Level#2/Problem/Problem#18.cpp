// Problem#18
#include <iostream>
#include<string>

using namespace std;

string ReadText()
{
	string Text;

	cout << "Please Enter Taxt? \n";
	getline(cin, Text);

	return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}

	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main()
{

	const short EncryptionKey = 2; //this is the key

	string Text = ReadText();
	string TextAfterEncrpytion = EncryptText(Text, EncryptionKey);
	string TextAfterDencrpytion = DecryptText(TextAfterEncrpytion, EncryptionKey);

	cout << "\nText Befor Encryption : " << Text << endl;
	cout << "Text After Encryption : " << TextAfterEncrpytion << endl;
	cout << "Text after Decryption : " << TextAfterDencrpytion << endl;

	return 0 ;
}
