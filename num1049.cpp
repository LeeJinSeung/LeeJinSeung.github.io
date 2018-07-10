#include <iostream>
using namespace std;

int pack[50];
int item[50];
int price;

int main() {
	int N, M;
	int pack_min = 1000;
	int item_min = 1000;
	cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		cin >> pack[i] >> item[i];
		if (pack[i] <= pack_min) {
			pack_min = pack[i];
		}
		if (item[i] <= item_min) {
			item_min = item[i];
		}
	}
	if (pack_min >= 6 * item_min) {
		price = item_min * N;
	}
	else {
		price = N / 6 * pack_min + (N - ((N / 6) * 6))*item_min;
		if (price > pack_min*((N + 5) / 6)) {
			price = pack_min * ((N + 5) / 6);
		}
	}
	cout << price;
	system("pause >> null");
	return 0;
}
