#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {

    int num; cin >> num;
    for(int i=0; i< num; i++) {
        int n; cin >> n;
        if(i%2 == 0) v.push_back(n);
        else if(i%2 == 1){
            v.insert(v.begin(),n);
        }
    }

    cin.ignore();
    string str; getline(cin, str);
    int sum=0;
    int count = num;
    for(int i=0; i<str.length(); i++) {
        if(str[i+1] == '\0') {
            sum *= 10;
            sum += str[i] - '0';
            if(count%2 == 0) v.push_back(sum);
            else v.insert(v.begin(),sum);
            sum = 0;
            count++;
            continue;
        }


        if(str[i] == ' ') {
            if(count%2 == 0) v.push_back(sum);
            else v.insert(v.begin(),sum);
            sum = 0;
            count++;
        }
        else {
            sum *= 10;
            sum += str[i] - '0';
        }
    }

    int m; 
    // cnt++;
    while(1) {
        cin >> m;
        if(m == -1) break;

        if(count%2 == 0) v.push_back(m);
        else v.insert(v.begin(),m);
        count++;
    }

    cout << '[';
    for(auto i = v.begin(); i<v.end(); i++) {
        if(i != v.begin()) cout << ", ";
        cout << *i;
    }
    cout << ']';

    return 0;
}