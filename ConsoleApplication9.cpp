#include <iostream>
#include <cmath>

using namespace std;

bool first(int);

int main()
{
	int x;

	cout << "Press number: ";

	cin >> x;

	if (first(x) && x != 1)
	{
		cout << "True number!";
	}
	else cout << "False number!";
}

bool first(int y)
{
	int i;

	bool z = true;

	for (i = 2; i <= sqrt(abs(y)); i++)
	{
		if (y % i == 0)
		{
			z = false;
			break;
		}
	}

	return z;
}