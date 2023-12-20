#include <bits/stdc++.h>
using namespace std;

main() {
    int minRed = INT_MAX, maxBlue = INT_MIN, minBlue = INT_MAX,maxRed = INT_MIN;
    int order;

    for(int i=0; 1; i++) {
        int x; 
        cin >> x;
        if(x == -998 or x == -999){
            order = x;
            break;
        }

        int y; 
        cin >> y;
    
        if(i%2 == 0) {
            minRed = min(minRed, x);
            maxBlue = max(maxBlue, y);
            minBlue = min(minBlue, y);
            maxRed = max(maxRed, x);
        }
        else{
            minRed = min(minRed, y);
            maxBlue = max(maxBlue, x);
            minBlue = min(minBlue, x);
            maxRed = max(maxRed, y);
        }
    }
    
    if(order == -998){
        cout << minRed << " " << maxBlue;
    }else cout << minBlue << " " << maxRed;


}