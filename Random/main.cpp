#include <iostream>

using namespace std;

int get_rand_number();
int get_range_random(int min, int max);

int a, b, m, x_0;

int main(int argc, char **argv)
{
	int count, rand;

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
	cout << endl;

	for (int i = 0; i < count; i++)
	{
		rand = get_rand_number();
		cout << rand << endl;
	}

	cout << "\nmin = 20\nmax = 45\nrand = " << get_range_random(20, 45) << endl;
	return 0;
}

int get_rand_number()
{
	static int rand_num = x_0;
	rand_num = (a * rand_num + b) % m;
	return rand_num;
}

int get_range_random(int min, int max)
{
	int rand_num;
	rand_num = min + (double(get_rand_number()) / m) * (max - min);
	return rand_num;
}