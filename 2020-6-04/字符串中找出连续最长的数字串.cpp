#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	int Max_len = 0, start = 0, Min_start = 0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] >= '0' && str[i] <= '9'){
			int Min_len = 0;
			Min_start = i;
			while (str[i] >= '0' && str[i] <= '9'){
				i++;
				Min_len++;
			}
			if (Min_len > Max_len){
				Max_len = Min_len;
				start = Min_start;
			}
		}
	}
	cout << str.substr(start, Max_len) << endl;
	system("pause");
	return 0;
}