#include <iostream>
using namespace std;

int Hansu(int num, int count) {
	for (int i = 1; i <= num; ++i)
	{
		if (i < 100) {
			++count;
		}
		else if (i<1000) {
			int num1 = i / 100;
			int num2 = (i - (num1 * 100)) / 10;
			int num3 = i % 10;
			if ((num1 - num2) == (num2 - num3)) {
				++count;
			}
		}
	}

	return count;
}

int main()
{
	int num;
	int count = 0;
	cin >> num;
	int result;
	result = Hansu(num, count);
	cout << result;
	system("pause >> null");
	return 0;
}

