#include <iostream>

using namespace std;

bool isPrime(int n) {
		// 1 is not prime
    if (n == 1) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int gcd(int a, int b){ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}


int phi(int n){
	if(isPrime(n)){
		return n-1;
	}
	int res = 0;
	for(int i = 1; i < n; i++){
		if(gcd(i, n) == 1){
			res += 1;
		}
	}
	return res;
}

int main(){
	int n; cin >> n;
	cout << phi(n);
	return 0;
}