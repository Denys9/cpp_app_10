#include <iostream>
using namespace std;

void fact(int s1, int s2);

int main() {
	int s1, s2 = 1;
	cout << "Enter 1 size: ";
	cin >> s1;
	fact(s1, s2);
}

void fact(int s1, int s2)
{
	for (size_t i = 1; i < s1 + 1; i++)
	{
		s2 = s2 * i;
		cout << " * " << s2;;
	}
	cout << endl;
	cout << "\factorial " << s1 << " = " << s2;
}