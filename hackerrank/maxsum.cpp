// https://www.hackerrank.com/challenges/mini-max-sum?isFullScreen=true
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long int small_sum = 0;
    for(int i = 0; i < 4; i++){
        small_sum += arr[i];
    }
    long long int big_sum = 0;
    for(int i = 1; i < 5; i++){
        big_sum += arr[i]; 
    }
    cout << small_sum << " " << big_sum << endl;
}

int main(){
	vector<int> arr;
	for(int i = 0; i < 5; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	miniMaxSum(arr);
	return 0;
}