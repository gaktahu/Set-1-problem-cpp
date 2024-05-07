#include <iostream>

using namespace std;


int gcd(int a, int b){ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
  
    if (a == b) 
        return a; 
  
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

int CRT(int arrA[], int arrB[]){
	if( (gcd(arrB[0], arrB[1]) == 1) && (gcd(arrB[0], arrB[2]) == 1) && (gcd(arrB[1], arrB[2]) == 1)  ){
		int x;

		int x0 = arrB[1] * arrB[2];
		int x1 = arrB[0] * arrB[2];
		int x2 = arrB[0] * arrB[1];

		if( x0 % arrB[0] != arrA[0] ){
			
			int i = 1;
			while( (x0 * i) % arrB[0] != arrA[0]  ){
				i++;
			}
			x0 = x0 * i;
		}
		if( x1 % arrB[1] != arrA[1] ){

			int i = 1;
			while( (x1 * i) % arrB[1] != arrA[1]  ){
				i++;
			}
			x1 = x1 * i;
		}
		if( x2 % arrB[2] != arrA[2] ){

			int i = 1;
			while( (x2 * i) % arrB[2] != arrA[2]  ){
				i++;
			}
			x2 = x2 * i;
		}

		x = x0 + x1 + x2;

		return x;
	}
	return -1;
}

int main(){
	int arrA[3];
	for(int i = 0; i < 3; i++){
		cin >> arrA[i];
	};

	int arrB[3];
	for(int i = 0; i < 3; i++){
		cin >> arrB[i];
	}

	cout << "Res : ";
	cout << CRT(arrA, arrB);
	return 0;
}