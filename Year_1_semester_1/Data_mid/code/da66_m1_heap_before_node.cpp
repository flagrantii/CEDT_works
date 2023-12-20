#include<bits/stdc++.h>
using namespace std;

vector<int> dump;
void nodeadd(int n, int m) {
    if(n <= m) return;
    dump.push_back(m);
    nodeadd(n,(m*2)+1);
    nodeadd(n,(m*2)+2);
}

int main() {
    int n, m;cin>>n>>m;
    nodeadd(n, m);
    sort(dump.begin(),dump.end());

    int cnk=0;
    cout<<n-dump.size()<<"\n";

    for(int i=0;i<n;i++) {
        if(i == dump[cnk]) {
            cnk++;
        }else cout<<i<<" ";
    }

    return 0;
}