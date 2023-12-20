#include<bits/stdc++.h>
using namespace std;

int find_score(char c) {
    if(c == 'R') return 1;
    else if(c == 'Y') return 2;
    else if(c == 'G') return 3;
    else if(c == 'N') return 4;
    else if(c == 'B') return 5;
    else if(c == 'P') return 6;
    else if(c == 'K') return 7;
    return 0;
}

main() {

    int num; cin >> num;
    cin.ignore();

    while(num--) {
        string ball; 
        getline(cin, ball);


        bool ck = true;
        bool ck2 = false;
        int score = 0;
        int last_r_index = -1;


        for(int i=0; i<ball.length(); i+=2) {
            if(ball[0] != 'R' or (i!=0 and ball[i] == 'R' and ball[i-2] == 'R')) {
                ck = false;
                break;
            }
            if((i - last_r_index) - 2 > 2 and ball[i] == 'R') {
                ck2=true;
                break;
            }
            if(ball[i] == 'R') {
                score += find_score(ball[i]);
                last_r_index = i;
                ck = true;
                ck2 = false;
            }
            if((ball[i] == 'Y' || ball[i] == 'G' || ball[i] == 'N' || ball[i] == 'B' || ball[i] == 'P' 
                || ball[i] == 'K') and ball[i-2] == 'R') {
                score += find_score(ball[i]);
                ck = true;
                ck2 = false;
            }

            int a = (i - last_r_index) - 2;

            if(last_r_index != -1 && a >=2) {
                char ch[] = {'\0', 'Y', 'G', 'N', 'B', 'P', 'K'};
                if(ball[i] != ch[a/2]) {
                    ck = false;
                    break;
                }
                else {
                    score += find_score(ball[i]);
                    ck = true;
                }
            }
            
        }

        if(ck and !ck2){
            cout << score << '\n';
        }else cout << "WRONG_INPUT\n";
    }
}