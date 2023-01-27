#include <iostream>
using namespace std;
void cube(int num1, int num2);
int main() {
	int num1, num2;
	cout << "Enter 1 number: ";
	cin >> num1;
	cout << "Enter 2 number: ";
	cin >> num2;
	cube(num1, num2);
}
void cube(int num1, int num2)
{
	if (num1 > num2)
	{
		cout << num1 << " > " << num2;
	}
	else if (num1 < num2)
	{
		cout << num1 << " < " << num2;
	}
	else
	{
		cout << num1 << " = " << num2;
	}

}