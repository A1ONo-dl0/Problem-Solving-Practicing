#include <iostream>
#include <string>
using namespace std;

string ReadPassword(string Message)
{
	string P;

	cout << Message << "\n";
	cout << "Enter: ";
	cin >> P;

	return P;
}

//او يمكن تغيير البوليان وعمل الدالة بسترنك وترجع الباسسورد وتكون الطباعة في المين
//وبالنسبة للعداد لطباعة كم محاولة للتخمين ايضا نسويه بالمين ونعطيه للدالة باي اددريس وهكذا ستتغير قيمته وايضا طباعته في المين


bool GuessPassword(string Password)
{
	short Counter = 0;
	string word = "";
	for (short i = 65; i <= 90; i++)
	{
		for (short j = 65; j <= 90; j++)
		{
			for (short k = 65; k <= 90; k++)
			{
				word += char(i);
				word += char(j);
				word += char(k);
				Counter++;
				cout << "\nTrial [" << Counter << "]: " << word << "\n";
				if (word == Password)
				{
					cout << "\nPassword is: " << word << "\n";
					cout << "Found After " << Counter << " Trial(s)" << "\n";
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}

/*وبالنسبة لوورد يجب ان نرجع القيمة او نفرغها بالاصح بعد كل تخمين لأنه سيبقى بعد كل تخمين
* سيضيف حروف جديدة بدون حذف التخمين او الكلمة القديمة لأمه سترنك وسيكون هنالك الكثير من الحروف وتصير خطأ
* فيجب تفريغ السترنك وورد بعد كل تخمين خاطئ
*/

int main()
{
	GuessPassword(ReadPassword("Please,Enter Password?"));

	return 0;
}