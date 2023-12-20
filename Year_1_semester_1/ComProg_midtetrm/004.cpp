#include<bits/stdc++.h>
using namespace std;

bool prime_check(long long x){
    bool check=false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            check=true;
            break;
        }
    }
    return check;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string number;
        char a,b;
        int n,m;
        cin>>a>>n>>b>>m;
        for(int j=0;j<n;j++){
            number+=a;
        }
        for(int j=0;j<m;j++){
            number+=b;
        }

        long long num = stoll(number);
        if(prime_check(num)){
            cout<<"NO"<<"\n";
        }else cout<<"YES"<<"\n";

    }
    return 0;
}