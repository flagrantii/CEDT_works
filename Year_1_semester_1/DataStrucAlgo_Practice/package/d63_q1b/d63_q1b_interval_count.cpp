#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int n, r, k;
    cin>>n>>r>>k;
    long long int number[n];
    long long int range[r];
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    for(int i=0;i<r;i++){
        cin>>range[i];
    }
    
    sort(number, number+n);
    
    for(int i=0;i<r;i++){
        int count=0;
        long long int lower = range[i]-k;
        long long int upper = range[i]+k;
        int lo = lower_bound(number, number+n, lower) - number;
        int hi = upper_bound(number, number+n, upper) - number;
        count = hi - lo;
        cout<<count<<" ";
    }
    return 0;
}