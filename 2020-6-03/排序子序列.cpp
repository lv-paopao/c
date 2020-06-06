#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int Divide_min(vector<int>&str, int n){
	int count = 0;
	int i = 0;
	while (i < n){
		if (str[i]>str[i + 1]){
			while (i<n && str[i]>str[i + 1]){
				i++;
			}
			i++;
			count++;
		}
		else if (str[i] == str[i + 1]){
			i++;
		}
		else if (str[i] < str[i + 1]){
			while (i < n && str[i] < str[i + 1]){
				i++;
			}
			i++;
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	int a_i;
	cin >> n;
	vector<int> str(n+1);
	for (int i = 0; i < n; i++){
		cin >>str[i];
	}
	int ret = Divide_min(str, n);
	cout << ret;
	system("pause");
	return 0;
}