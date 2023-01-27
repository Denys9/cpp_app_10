#include <iostream>
using namespace std;

void square(int s1, int s2);

int main() {
	int s1, s2;
	cout << "Enter 1 size: ";
	cin >> s1;
	cout << "Enter 2 size: ";
	cin >> s2;
	square(s1, s2);
}

void square(int s1, int s2)
{
	for (size_t i = 0; i < s2; i++)
	{
		for (size_t j = 0; j < s1; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
}