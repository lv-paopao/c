#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int>str(n);
	for (size_t i = 0; i < str.size(); i++){
		cin >> str[i];
	}
	int max = str[0];
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < str.size(); i++){
		if (sum1 >= 0){
			sum2 = sum1 + str[i];
		}
		else
			sum2 = str[i];
		if (sum2>max){
			max = sum2;
		}
		if (sum2 < 0){
			sum2 = 0;
		}
		sum1 = sum2;
	}
	cout << max << endl;
	system("pause");
	return 0;
}
