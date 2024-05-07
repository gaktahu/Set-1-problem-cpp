// https://tlx.toki.id/courses/basic/chapters/12/problems/E/

#include <iostream>
#include <bitset>

using namespace std;

void biner(int n){
    if(n < 0){
        cerr << "invalid" << endl;
        return;
    }
    
    int numBits = 0;
    int temp = n;
    while (temp > 0) {
        numBits++;
        temp /= 2;
    }

    bitset<64> binaryNum(n);

    for (int i = numBits - 1; i >= 0; i--) {
        cout << binaryNum[i];
    }
    
}

int main(){
    int N; cin >> N;
    biner(N);
    return 0;
}