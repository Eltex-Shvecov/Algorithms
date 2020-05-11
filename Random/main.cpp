#include <iostream>

using namespace std;

void get_rand_number(int x_0, int a, int b, int m, int count);

int main(int argc, char **argv)
{
	int a, b, m, x_0, count;

	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "M = ";
	cin >> m;
	cout << "count = ";
	cin >> count;
	cout << "X0 = ";
	cin >> x_0;

	get_rand_number(x_0, a, b, m, count);

	return 0;
}

void get_rand_number(int x_0, int a, int b, int m, int count)
{
	cout << endl;
	for (int i = 0; i < count; i++)
	{
		x_0 = (a * x_0 + b) % m;
		cout << x_0 << endl;
	}
}