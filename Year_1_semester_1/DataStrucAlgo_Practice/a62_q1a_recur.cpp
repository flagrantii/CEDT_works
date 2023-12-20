#include<bits/stdc++.h>
using namespace std;
//Devide Concure
int metrix[1024][1024];
void recur(int a, int b, int x, int y) {
    if(a == 0){
        metrix[x][y] = b;
    }else{
        int index = pow(2,a-1);
        recur(a-1,b,x,y);
        recur(a-1,b+1,x+index,y);
        recur(a-1,b-1,x,y+index);
        recur(a-1,b,x+index,y+index);
    }
}
main() {
    int a, b;cin >> a >> b;
    int size = pow(2, a);
    recur(a,b,0,0);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<metrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}