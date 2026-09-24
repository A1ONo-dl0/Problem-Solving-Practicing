#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
	float num;
	cout << Message << "\n";
	cout << "Enter: ";
	cin >> num;

	return num;
}

float GetFractionPart(float num)
{
	return num - int(num);

	//اي ننقص الرقم العشري الذي فيه الاعشار او الباقي ناقص هذ الرقم نفسه بس نسوي كاستنك الى انتيجر
   //فنحصل فقط على المطلوب وهو الفراكشن او العشري

}

float MyRound(float num)
{
	short inPart = num;
	float FracPart = GetFractionPart(num);

	if (abs(FracPart) >= 0.5)
	{
		if (num >= 0)
			return ++inPart;
		else
			return --inPart;
	}
	else
		return inPart;

}

short int MyABSResult(short int num)
{
	if (num >= 0)
		return num;
	else
		return num * -1;

	//اكيد اذا مو اكبر او يساوي صفر ف ايلس معناها اصغر من صفر اي سالب
	//فماكو داعي نكتب شرط
	//وايضا اذا المستخدم ادخل رقم موجب نرجع الرقم نفسه لانه موجب ماكو داعي تسوي عليه عملية رياضية
}

float MyFloor(float num)
{
	if (num >= 0 || num == int(num))
		return int(num);
	else
		return int(num) - 1;
}

float MyCeil(float num)
{
	if (abs(GetFractionPart(num)) > 0)
		if (num >= 0)
			return int(num) + 1;
		else
			return int(num);
	else
		return num;
}

float MySqrt(float num)
{
	return pow(num, 0.5);
}

int main()
{
	float num = ReadNumber("Enter a Number?");
	//cout << "\nMy Round Result is: " << MyRound(num) << "\n";
	//cout << "\nC++ Round Result is: " << round(num) << endl;
	// 
	//cout << "\nMy Abs Result is: " << MyABSResult(num) << "\n";
	//cout << "\nC++ Abs Result is: " << abs(num) << endl;

	//cout << "\nMy Floor Result is: " << MyFloor(num) << "\n";
	//cout << "\nC++ Floor Result is: " << floor(num) << endl;

	//cout << "\nMy Ceil Result is: " << MyCeil(num) << "\n";
	//cout << "\nC++ Ceil Result is: " << ceil(num) << endl;

	cout << "\nMy Sqrt Result is: " << MySqrt(num) << "\n";
	cout << "\nC++ Sqrt Result is: " << sqrt(num) << endl;

	return 0;
}
