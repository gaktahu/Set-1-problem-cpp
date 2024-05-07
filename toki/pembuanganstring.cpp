// https://tlx.toki.id/courses/basic/chapters/11/problems/B
// String deletion

#include <iostream>
#include <string>

using namespace std;


int main(){
	
	string s, t;
	cin >> s >> t;

	int len_t = t.length();

	while(s.find(t) != -1){

		int index = s.find(t);

		s = s.erase(index, len_t);
	}

	cout << s;

	return 0;
}
