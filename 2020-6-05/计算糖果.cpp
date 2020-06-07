#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main(){
	int str[4];
	for (int i = 0; i < 4; i++){
		cin >> str[i];
	}
	int a, b, c;
	a = (str[0] + str[2]) / 2;
	b = (str[1] + str[3]) / 2;
	c = str[3] - b;
	if (a - b == str[0] && b - c == str[1] && a + b == str[2] && b + c == str[3]){
		cout<<a<<" "<<b<<" "<<c;
	}
	else
		cout<<"No";
	system("paause");
	return 0;
}