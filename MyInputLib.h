#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace MyInputLib
{
	int ReadNumber(const string& Message)
	{
		//لقراءة اي رقم سواء موجب او سالب او فردي او زوجي
		int Number;
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Input! , Please enter a valid number: ";
			cin >> Number;
		}
		
		return Number;
	}

	int ReadNumberInRange(const string& Message,short from,short to)
	{
		int Number;

		do
		{
			cout << Message << "\n";
			cout << "Enter: ";
			cin >> Number;
			if (Number<from || Number>to)
				cout << "\nWrong,Please Enter Number Between " << from << "&" << to << ".\n\n";
		} while (Number<from || Number>to);

		return Number;
	}

	char ReadCharacter(const string& Message)
	{
		char a;
		cout << Message << "\n";
		cout << "Enter: ";
		
		cin >> a;

		return a;
	}

	string ReadString(const string& Message)
	{
		string x;
		
		cout << Message << "\n";
		cout << "Enter: ";
		getline(cin >> ws, x);

		return x;
	}

	void ReadArray1D(short Arr[],short arrLength)
	{
		cout << "\nFill Array Elements Please : \n";
		for (short i = 0; i < arrLength; i++)
		{
			cin >> Arr[i];
		}
	}

	void ReadMatrix(short Arr[][50],short r,short c)
	{
		for (short i = 0; i < r;i++)
		{
			cout << "Enter elements for row " << i + 1 << " : ";
			for (short j = 0; j < c; j++)
				cin >> Arr[i][j];
		}
	}

	bool ReadYesOrNo(const string& Message)
	{
		char Answer = 'Y';
		do
		{
			cout << Message << "\n";
			cout << "Y/N\n";
			cout << "Enter: ";
			cin >> Answer;
			if (Answer != 'Y' && Answer != 'N' && Answer != 'y' && Answer != 'n')
				cout << "\nWrong,Please Enter Yes or No.\n\n";
		} while (Answer != 'Y' && Answer != 'N' && Answer != 'y' && Answer != 'n');

		if (Answer == 'Y' || Answer == 'y')
			return true;
		else
			return false;
	}

}