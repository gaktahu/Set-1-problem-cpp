// https://www.hackerrank.com/challenges/encryption/problem?isFullScreen=true

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

string encryption(string s) {
	s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());

	int size = s.length();
	int lowerbound = (int) floor(sqrt(size));
	int upperbound = (int) ceil(sqrt(size));
	int total = upperbound * lowerbound;
	 
	while (total < size) {
	    if (lowerbound < upperbound) {
	        ++lowerbound;
	    } else {
	        ++upperbound;
	    }
	    total = upperbound * lowerbound;
	}

	char grid[lowerbound][upperbound] = {0};
	int index = 0;
	for (int row = 0; row < lowerbound; ++row) {
	    for (int col = 0; col < upperbound; ++col) {
	        if (index <= s.length() - 1) {
	            grid[row][col] = s.at(index);
	            ++index;
	        }
	    }
	}

	string encrypted = "";
	for (int col = 0; col < upperbound; ++col) {
	    for (int row = 0; row < lowerbound; ++row) {
	        if (grid[row][col] != 0) {
	            encrypted += grid[row][col];
	        }
	    }
	    
	    if (col != upperbound - 1) {
	        encrypted += " ";
	    }
	}


	return encrypted;
}
	



int main(){
	string s;
    getline(cin, s);
	cout << encryption(s);
	return 0;
}