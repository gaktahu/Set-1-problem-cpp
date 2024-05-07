// https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());
    int biggest =  candles[candles.size()-1];
    int res = 0;
    for(int i = candles.size() - 1; i >= 0; i--){
        if(candles[i] == biggest){
            res += 1;
        }else{
            break;
        }
    }
    return res;
}

int main(){
	vector<int> candles = {3, 2, 1, 3};

	cout << birthdayCakeCandles(candles);
	return 0;
}