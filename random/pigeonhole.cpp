
#include <iostream>

using namespace std;

void pigeon(int m, int n){
	int k1 = m/n;
	int k2 = k1 + 1;

	while(m != 0){
		if(m % k2 != 0){
			cout << k1 << endl;
			m -= k1;
		}else{
			cout << k2 << endl;  
			m -= k2;
		}
	}
}

int main(){
	int m; cin >> m;
	int n; cin >> n;


	cout << "Res :" << endl;
	pigeon(m, n);
	return 0;
}