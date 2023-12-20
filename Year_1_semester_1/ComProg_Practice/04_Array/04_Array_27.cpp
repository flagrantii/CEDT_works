#include <bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin >> t;
    char n[7];
    int red[t], blue[t];
	int rednum=0,bluenum=0;
	
    for (int i = 0; i < t * 2; i++) {
    	int value;
    	cin>> value;
    	
        if (i % 4 == 0 || i % 4 == 3) {
            red[rednum] = value;
            rednum++;
        } else {
            blue[bluenum] = value;
            bluenum++;
        }
    }
    
    for (int j = 0; j < 7; j++) {
        cin >> n[j];
    }

    
    int minRed = red[0];
    int maxRed = red[0];

    for (int i = 1; i < rednum; i++) {
        if (red[i] < minRed) {
            minRed = red[i];
        }
        if (red[i] > maxRed) {
            maxRed = red[i];
        }
    }

    int minBlue = blue[0];
    int maxBlue = blue[0];

    for (int i = 1; i < bluenum; i++) {
        if (blue[i] < minBlue) {
            minBlue = blue[i];
        }
        if (blue[i] > maxBlue) {
            maxBlue = blue[i];
        }
    }
    
    if(n[1]=='i'){
    	cout<<minRed<<" "<<maxBlue;
	}else{
		cout<<minBlue<<" "<<maxRed;
	}

}