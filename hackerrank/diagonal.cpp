// https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    
    int first = 0;
    int second = 0;
    
    int length = arr.size() - 1;
    
    for(int i = 0; i < arr.size(); i++){
        first += arr[i][i];
        second += arr[i][length - i];
    }
    
    return abs(first - second);
}

int main(){
    vector<vector<int>> vect 
    { 
        {1, 2, 4},  
        {4, 5, 6},      
        {7, 8, 9}  
    }; 

    cout << diagonalDifference(vect);
}