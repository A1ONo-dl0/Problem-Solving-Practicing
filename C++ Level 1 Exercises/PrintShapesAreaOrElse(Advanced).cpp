#include <iostream>
#include <cmath>
using namespace std;

//نقدر ايضا نفس النسق لأي شكل نفس الكود بالضبط مع تغيير اكيد للأسامي فقط واعادة الاستخدام دائما
//Calculate Area by atriangle ep:23 abu-hadhoud

void ReadDimensions(float& A, float& B, float& C)
{
	cout << "Sides of the Triangle:\n";
	cout << "Enter A: ";
	cin >> A;
	cout << "Enter B: ";
	cin >> B;
	cout << "Enter C: ";
	cin >> C;
}

float CalculatePerimeter(float A, float B, float C)
{
	return (A + B + C) / 2;
}

float CalculateArea(float A, float B, float C, float p)
{
	const float PI = 3.1415;
	float R = ((A * B * C / (4 * sqrt(p * (p - A) * (p - B) * (p - C)))));

	return PI * pow(R, 2);
}

void PrintResult(float Area)
{
	cout << "\nThe Area of Circle is = " << Area << "m^2" << endl;
}

int main()
{
	float A, B, C;
	ReadDimensions(A, B, C);
	float Perimeter = CalculatePerimeter(A, B, C);
	float Area = CalculateArea(A, B, C, Perimeter);
	PrintResult(Area);

	return 0;
}