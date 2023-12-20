#include<bits/stdc++.h>
using namespace std;

int findDig(long long num) {
    int digit = 0;
    while(num >= 0) {
        num /= 10;
        digit++;
        if(num <=0) break;
    }
    return digit;
}

long long powLong(int digit) {
    long long sum=1;
    if(digit <= 0){
        return 0;
    }
    while(digit--) {
        sum *= 10;
    }
    return sum;
}

main() {

    long long m, n;
    cin>>m>>n;
    
    int mDig = findDig(m);
    int nDig = findDig(n);

    long long sum=0;
    
    for(int i=mDig;i<=nDig;i++) {
        sum += (powLong(i) - powLong(i-1))*i;
    }

    sum -=  ((m - powLong(mDig-1))*mDig);
    sum -= ((powLong(nDig) - n-1)*nDig);

    cout << sum;
}