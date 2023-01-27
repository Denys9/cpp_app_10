#include <iostream>
using namespace std;
void cube(int num1);
int main() {
	int num1;
	cout << "Enter 1 number: ";
	cin >> num1;
	cube(num1);
}
void cube(int num1)
{
	if (num1 > 0)
	{
		cout << num1 << " > 0";
	}
	else if (num1 < 0)
	{
		cout << num1 << " < 0";
	}
	else
	{
		cout << num1 << " = 0";
	}

}