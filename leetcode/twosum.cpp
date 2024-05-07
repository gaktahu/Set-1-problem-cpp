// https://leetcode.com/problems/two-sum/submissions/1250007370/

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){
            if(nums[i] + nums[j] == target && i < j){
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }
    return res;
};

int main(){
	int target; cin >> target;
	int size; cin >> size;
	vector<int> arr;

	for(int i = 0; i < size; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}


	vector<int> res = twoSum(arr, target);

	cout << "[";
	for(int i = 0; i < 2; i++){
		cout << res[i];
		if(i != 1){
			cout << " , ";
		}
	}
	cout << "]";

	return 0;
}
