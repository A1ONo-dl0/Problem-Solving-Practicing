#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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

int RandomNumber(int from, int to)
{
	int RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}

void FillArrayWith1ToN(int array[], int Size)
{
	for (short i = 0; i < Size; i++)
		array[i] = i + 1;
}

void PrintArray(int array[], int Size)
{
		for (short i = 0; i < Size; i++)
			cout << array[i] << " ";

	cout << endl;
}

void Swap(int &Num1, int &Num2)
{
	int temp;
	temp = Num1;
	Num1 = Num2; 
	Num2 = temp;
}
/*اذا مو باي رييفرنس من نبادل بين القيم وامكانهن هنا بالدالة سواب 
* بس مجرد الكومبايلر يوصل الى نهاية الدالة راح تنمسح الذاكرة المؤقتة الجديدة
* الي نشئت داخل هذه الدالة للتبديل بين قيمتين واماكنهن
* فداخل الدالة شفل ولا كأنه فعلنا شيء لأن التبديل لم يتم مباشرة بين عناوين الذاكرة للأرري
* مابين لو سويناها باي اددريس
* سيتم النظر او العمل مباشرة على العناوين الرئيسية للذاكرة للأرري من الدالة سواب
* وهكذا سيتم التبديل بين المكانين للقيمتين
*/
void ShuffleElements(int OriginalArray[], int size)
{
	for (short i = 0; i < size; i++)
	{
		Swap(OriginalArray[RandomNumber(1, size) - 1], OriginalArray[RandomNumber(1, size) - 1]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	int Size = ReadPositiveNumber("Enter Size of Array To Fill in Order?");

	FillArrayWith1ToN(Array, Size);

	cout << "\nArray Elements Before Shuffle:\n";
	PrintArray(Array, Size);

	ShuffleElements(Array, Size);

	cout << "\nArray Elements After Shuffle:\n";
	PrintArray(Array, Size);

	return 0;
}