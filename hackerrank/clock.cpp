// https://www.hackerrank.com/challenges/the-time-in-words/problem?isFullScreen=true

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string timeInWords(int h, int m) {
    string res;

    unordered_map<int, string> clock = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
        {10, "ten"},
        {11, "eleven"},
        {12, "twelve"},
        {13, "thirteen"},
        {14, "fourteen"},
        {15, "fifteen"},
        {16, "sixteen"},
        {17, "seventeen"},
        {18, "eighteen"},
        {19, "nineteen"},
        {20, "twenty"},
        {21, "twenty one"},
        {22, "twenty two"},
        {23, "twenty three"},
        {24, "twenty four"},
        {25, "twenty five"}, 
        {26, "twenty six"},
        {27, "twenty seven"}, 
        {28, "twenty eight"},
        {29, "twenty nine"}
    };
 
    if(m == 0){
        res = clock[h] + " o' clock";
    }else if(m == 1){
    	res = "one minute past " + clock[h];
    }
    else if((m > 1 && m <= 14) || (m > 15 && m <= 29)){
    	res = clock[m] + " minutes past " + clock[h];
    }else if(m == 15){
    	res = "quarter past " + clock[h];
    }else if(m == 30){
    	res = "half past " + clock[h];
    }else if(m > 31 && m != 45 && m <= 59 ){
    	res = clock[60-m] +  " minutes to " + clock[h + 1];
    }else if(m == 45){
    	res = "quarter to " + clock[h+1];
    }

    return res;   
}

int main(){
	int h; cin >> h;
	int m; cin >> m;


	cout << timeInWords(h, m);

	return 0;
}