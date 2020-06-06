#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1,str2;
	cin>>str2;
	while (cin >> str1){
		str2 = str1 + " " + str2;
	}
	cout << str2 << endl;
	system("pause");
	return 0;
}
