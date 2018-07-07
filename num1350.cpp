#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int N;
	double S[1000], C;
	long long disk=0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> S[i];
		if (S[i] > 1000000000) {
			S[i] = 1000000000;
		}
	}
	cin >> C;
	if (C >= 1048576) {
		C = 1048576;
	}
	for (int i = 0; i < N; ++i) {
		disk =disk+ ceil(S[i] / C) * C;
	}
	cout << disk;
	system("pause >> null");
	return 0;
}
