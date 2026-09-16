#include <iostream>
using namespace std;

struct userinfo
{
	short int Age;
	bool HasDriverLic;
	bool HasRecommendation;
};

userinfo REaduserinfo()
{
	userinfo info;
	cout << "Please,Enter your Age?\n";
	cout << "Enter: ";
	cin >> info.Age;
	cout << "\nDo You Have a Driver License?\n";
	cout << "(0) No\n" << "(1)Yes\n";
	cout << "Enter: ";
	cin >> info.HasDriverLic;
	cout << "\nDo You Have a Recommendation?\n";
	cout << "(0) No\n" << "(1)Yes\n";
	cout << "Enter: ";
	cin >> info.HasRecommendation;

	return info;
}

bool Checkinfo(userinfo info)
{
	if (info.HasRecommendation)
		return true;
	else if (info.Age > 21 && info.HasDriverLic)
		return true;
	else
		return false;
}

void Printinfo(userinfo info)
{
	if (Checkinfo(info))
		cout << "\n-----Hired-----" << endl;
	else
		cout << "\n-----Rejected-----" << endl;
}

int main()
{
	Printinfo(REaduserinfo());

	return 0;
}