#include <iostream>
using namespace std;

void light(int s1, int s2);

int main() {
	int s1, s2 = 2;
	cout << "Enter a number: ";
	cin >> s1;
	light(s1, s2);
}

void light(int s1, int s2)
{
	for (size_t i = s2; i < s1; i++)
	{
		if (s1 % i == 0)
		{
			cout << " Wrong " << s1;
		}
		else
		{
			cout << "Light " << s1;
		}

	}
	cout << endl;

}
