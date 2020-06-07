#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int main(){
	int M, N;
	string str="";
	string hex = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	cin >> M >> N;
	while(M){
		if (M < 0){
			M = -M;
			cout << "-";
		}
		str = hex[M % N]+str;
		M = M / N;
	}
	cout << str;
	system("pause");
	return 0;
}