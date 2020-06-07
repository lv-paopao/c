#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		map<int, int>m;
		for (int i = 0; i<numbers.size(); i++){
			m[numbers[i]] += 1;
			if (m[numbers[i]]>numbers.size() / 2)
				return numbers[i];
		}
		return 0;
	}
};