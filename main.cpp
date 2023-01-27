#include <iostream>
using namespace std;
void cube(int num, int cub);
int main() {
	int num, cub = 0;
	cout << "Enter a number: ";
	cin >> num;
	cube(num, cub);
}
void cube(int num, int cub)
{
	cub = num * num * num;
	cout << "Cube = " << cub;
}