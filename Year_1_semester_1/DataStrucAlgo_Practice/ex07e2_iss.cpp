#include<bits/stdc++.h>
using namespace std;


int chk = 0;

void recur(int n, int count, int start) {
    for (int i = start; i < n; i++) {
        if (count + i < n) {
             recur(n, count + i, i);
        } else if (count + i == n) {
            chk++;
            break;
        } else if (count + i > n) {
           
        }
    }
}

main() {
    int n;
    cin >> n;
    recur(n,0,1);
    cout << chk+1;

}