#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadText(string Message)
{
	string P;

	cout << Message << "\n";
	cout << "Enter: ";
	getline(cin, P);

	return P;
}

string EncryptText(string& Text, int EncryptionKey)
{
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = Text[i] + char(EncryptionKey);
	}

	return Text;
}

string DecryptText(string& Text, int EncryptionKey)
{
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = Text[i] - char(EncryptionKey);
	}

	return Text;
}

/*
   =======================================================================
   1. تطبيقات عملية حقيقية (Use Cases):

	  * تشفير الرسائل النصية والدردشة (Chat Messaging):
		تشفير الرسائل أثناء إرسالها من المرسل، وفك تشفيرها عند المستلم فقط.

	  * تشفير كلمة المرور والبيانات الحساسة (Password & Sensitive Data):
		عدم حفظ كلمة المرور كنص صريح (Plain Text) في قاعدة البيانات أو الملفات لتجنب سرقتها عند الاختراق.

	  * تخصيص المفتاح (Dynamic Encryption Key):
		يمكنك تغيير قيمة EncryptionKey برقم سري يحدده المستخدم بدلاً من القيمة الثابتة (2) لزيادة التعقيد.
   =======================================================================
*/

int main()
{
	int EncryptioKey = 2;
	string Text = ReadText("Please,Enter Text?");
	cout << "\nText Before Encryption: " << Text << "\n";


	cout << "Text After Encryption: " << EncryptText(Text, EncryptioKey) << "\n";
	cout << "Text After DecryptionKey: " << DecryptText(Text, EncryptioKey) << "\n";

	return 0;
}