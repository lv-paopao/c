#define _CRT_SECURE_NO_WARNINGS 1
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long> v(3 * n);
	for (int i = 0; i < 3 * n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	long sum = 0;
	for (int i = 1; i <= n; i++){
		sum += v[3 * n - i * 2];
	}
	cout << sum;
	system("pause");
	return 0;
}