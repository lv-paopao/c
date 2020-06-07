#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isReverse(string str){
	string tmp = str;
	reverse(tmp.begin(), tmp.end());
	return tmp == str;
}
int main(){
	string A, B;
	while (getline(cin, A) && getline(cin, B)){
		int cont = 0;
		for (size_t i = 0; i <= A.size(); i++){
			string tmp = A;
			tmp.insert(i, B);
			if (isReverse(tmp) == true){
				cont++;
			}
		}
		cout << cont << endl;
	}
	system("pause");
	return 0;
}