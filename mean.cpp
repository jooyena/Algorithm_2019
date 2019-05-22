#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(void) {
	int R, r, a;
	cin >> R;
	vector<int> v;
	while (R != 0) {
		int temp = 0;
		double count = 0;
		double mean;

		cin >> r;
		for (int i = 0; i < r; i++) {
			cin >> a;
			v.push_back(a);
			temp = temp + a;
		}
		mean = (double)temp / r;

		for (int i = 0; i < r; i++) {
			if (v[i] > mean) count++;
		}
		cout.precision(3);//소수 셋째짜리까지 출력 함수
		double stdRatio = ((double)count / r) * 100;
		cout << fixed << stdRatio << "%" << endl;
		v.clear();
		R--;
	}
}
