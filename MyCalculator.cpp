#include <iostream>
using std::cout;
using std::endl;
using std::endl;
using std::cin;

int main() 
{
	float num1, num2;
	char operation;
	cout << "Echaminya Juni's Calculator" << endl;
	cin >> num1 >> operation >> num2;

	switch (operation)
	{
	case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
	case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
	case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
	case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
	case '%': 
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1);
		isNum2Int = ((int)num2 == num2);
		if (isNum1Int && isNum2Int)
			cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
		else
			cout << "is not valid"; break;


		system("Pause > 0");


	}














}
