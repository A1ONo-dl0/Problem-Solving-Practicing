#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enIsPrime { Prime = 1, NotPrime = 2 };

int ReadNumber(string Message)
{
	int num;
	cout << Message << "\n";
	cout << "Enter: ";
	cin >> num;

	return num;
}

enIsPrime CheckPrime(int num)
{
	if (num <= 1)
		return enIsPrime::NotPrime;

	int M = round(sqrt(num));

	/*هنا لأن ماكو داعي نجيك من2 الى الرقم او اصغر من الرقم بواحد سيكون كبير
	* اي لو ادخلنا مليون سيجيك مليون كلها تقريبا
	* لكن في الرياضيات يكفي ان نجيك نصف او جذرالرقم لان اكيد اذا احد الارقام في البداية قبل القسمة
	* فأكيد من نصف الرقم وفوق سيقبل القسمة ويطلع مو برايم اي هناك قاسم كبير وصغير مشترك في الرقم غير البرايم يجعله يقبل القسمة
	* اذن فقط نمشي الى جذر هذا الرقم كافي ونجعله عدد صحيح اكيد ونجيك
	*/

	for (short int counter = 2; counter <= M; counter++)
	{
		if (num % counter == 0)
			return enIsPrime::NotPrime;
	}
	return enIsPrime::Prime;
}

void PrintResult(enIsPrime result)
{
	switch (result)
	{
	case enIsPrime::Prime: cout << "\nis Prime" << endl;
		break;

	case enIsPrime::NotPrime: cout << "\nis Not Prime" << endl;
		break;
	}
}

int main()
{
	int number = ReadNumber("Please,Enter a Number?");
	enIsPrime Result = CheckPrime(number);
	PrintResult(Result);
	return 0;
}