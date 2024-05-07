// https://leetcode.com/problems/plus-one/

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int len = digits.size();
    int last = len - 1;
    digits[last] += 1;
    if(digits[last] == 10){
        if(len == 1){
            digits[last] = 0;
            digits.insert(digits.begin(), 1);
        }else{
            for(int i = last; i >=0 ; i--){
                if(digits[i] == 10){
                    digits[i] = 0;
                    if(i == 0){
                        digits.insert(digits.begin(), 1);
                    }else{
                        digits[i-1] += 1;
                    }
                }else{
                    break;
                }
            }
        }
    }
    return digits;
}

int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,3,9};
    vector<int> arr3 = {9,9};


    cout << "arr 1 : ";
    arr1 = plusOne(arr1);
    for(const auto& el : arr1){
        cout << el << ",";
    }
    cout << endl;

    cout << "arr 2 : ";
    arr1 = plusOne(arr2);
    for(const auto& el : arr2){
        cout << el << ",";
    }
    cout << endl;

    cout << "arr 3 : ";
    arr1 = plusOne(arr3);
    for(const auto& el : arr3){
        cout << el << ",";
    }
    cout << endl;
}