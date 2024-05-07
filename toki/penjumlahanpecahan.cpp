// https://tlx.toki.id/courses/competitive/chapters/02/problems/A
// Still got two hidden case wrong, don't know why

#include <iostream>

#define ll long long

using namespace std;

int gcd(int a, int b) {
    return gcd(b, a % b);
}

void addFraction(int a, int b, int c, int d){
    ll lcm = (ll)(b) * d / gcd(b, d);

    ll n1 = (lcm / b) * a;
    ll n2 = (lcm / d) * c;

    ll sum = n1 + n2;
    
    ll divisor = gcd(sum, lcm);
    sum /= divisor;
    lcm /= divisor;


    cout << sum << " " << lcm << endl;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    addFraction(a, b, c, d);

    return 0;
}
