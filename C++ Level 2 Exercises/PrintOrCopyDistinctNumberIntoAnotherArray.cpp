#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int num;
	do
	{
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> num;
		if (num <= 0)
			cout << "\nWrong,Please Enter a Positive Number.\n\n";
	} while (num <= 0);

	return num;
}

void FillOriginalArray(int Array[], int& Length)
{
	//هذه التعبئة بطريقة هارد كودد اي اليدوية
	//او عادي نقدر نعبي عن طريق ال سين من شاشة الرن
	Length = 10;
	Array[0] = 10;
	Array[1] = 10;
	Array[2] = 10;
	Array[3] = 50;
	Array[4] = 50;
	Array[5] = 70;
	Array[6] = 70;
	Array[7] = 70;
	Array[8] = 70;
	Array[9] = 90;
}

short FindNumberinArray(int Array2[], int ArrayNum, int Length2)
{
	//اي يرجع يفتر الارري الثانية حسب طولها او حجمها من اول عنصر ويقارن
	//اي يشوف هل متكرر او لا فأذا مثلا مشى من البداية ووجد رقم 5 متكرر
	//فلن يعبي رقم 5 مرة اخرى
	//وهكذا
	for (short i = 0; i < Length2; i++)
	{
		if (Array2[i] == ArrayNum)
			return i;
	}

	return -1;
}

bool IsNumberInArray(int Array2[], int ArrayNum, int Length2)
{
	return FindNumberinArray(Array2, ArrayNum, Length2) != -1;
}

void AddArrayElements(int Num, int Array2[], int& Length2)
{
	Array2[Length2] = Num;
	Length2++;
}

void CopyDistinctArrayElementsUsingAddArrayElements(int OriginalArray[], int Array2[], int Length, int& Length2)
{
	for (short i = 0; i < Length; i++)
	{
		if (!IsNumberInArray(Array2, OriginalArray[i], Length2))
			AddArrayElements(OriginalArray[i], Array2, Length2);
	}

	// نفحص هل الرقم غير موجود سابقاً في المصفوفة الثانية وبطولها الحالي
	// ==========================================================
	// تتبع طريقة عمل الفحص والنسخ:
	// 1. عند فحص رقم غير موجود بالبداية (مثل 10)، ترجع دالة البحث قيمة سالب واحد.
	// 2. يصبح شرط دالة التحقق (فولس) لعدم وجود الرقم مسبقاً.
	// 3. نفي الـ (فولس) يصبح (ترو)، فيتم استدعاء التعبئة ونقل الرقم للمصفوفة الثانية.
	// 4. عند الانتقال للمواقع التالية ورؤية رقم مكرر، ترجع دالة البحث موقع الرقم.
	// 5. ترجع دالة التحقق قيمة (ترو) دلالة على تكرار الرقم ووجوده مسبقاً.
	// 6. نفي الـ (ترو) يصبح (فولس)، فلا يتم تعبئة الخانة التالية ولا تصل لدالة الإضافة.
	// 7. تستمر العملية بنفس الخطوات حتى الوصول إلى رقم غير مكرر ولا يساوي ما قبله.
	// ==========================================================
}

void PrintArrayElements(int Array[], int Length)
{
	for (short i = 0; i < Length; i++)
		cout << Array[i] << " ";

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	int Array2[100];
	int ArrayLength = 0;
	int Array2Length = 0;
	FillOriginalArray(Array, ArrayLength);

	CopyDistinctArrayElementsUsingAddArrayElements(Array, Array2, ArrayLength, Array2Length);

	cout << "Array 1 Elements: \n";
	PrintArrayElements(Array, ArrayLength);

	cout << "\nArray 2 Distinct Numbers: \n";
	PrintArrayElements(Array2, Array2Length);

	return 0;
}
