#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	int count = 0, n, a = 0;
	cin >> n;
	if (n < 10)
	{
		n = n * 10;
	}
	while (n != a)
	{
		if (a == 0)
		{
			a = (n / 10 + n % 10) % 10 + n % 10 * 10;
		}
		else
		{
			a = (a / 10 + a % 10) % 10 + a % 10 * 10;
		}
		count++;
	}
	if (n == 0)
	{
		count = 1;
	}
	cout << count;


	system("pause >> null");
	return 0;
}

