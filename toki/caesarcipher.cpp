// https://tlx.toki.id/courses/basic/chapters/11/problems/C

#include <iostream>
#include <string>

using namespace std;

const int LIMIT = 25;

int main(){
	string s; int k;
	cin >> s >> k;

	if(k > 0 && k <= LIMIT){
		int len = s.length();
		for(int i = 0; i < len; i++){
			int sum = (int)s[i] + k;
			if(sum > 122){
				sum -= 26;
			} 
			s[i] = (char) sum;
		}

		cout << s.c_str();
	}

	return 0;
}