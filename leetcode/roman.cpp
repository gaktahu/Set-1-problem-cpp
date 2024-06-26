// https://leetcode.com/problems/roman-to-integer/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && romanValues[s[i]] < romanValues[s[i+1]]) {
            res -= romanValues[s[i]];
        } else { 
            res += romanValues[s[i]];
        }
    }
    return res;
 }

int main(){
	string s; cin >> s;
	cout << romanToInt(s);
}