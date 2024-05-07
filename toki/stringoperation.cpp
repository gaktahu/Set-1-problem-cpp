// https://tlx.toki.id/courses/basic/chapters/11/problems/D

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;

	int index_s2 = s1.find(s2);
	s1 = s1.erase(index_s2, s2.length());

	int index_s3 = s1.find(s3);
	int length_s3 = s3.length();

	s1.insert((index_s3 + length_s3), s4);

	cout << s1.c_str();

	return 0;
}