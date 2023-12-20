#include<bits/stdc++.h>
using namespace std;
main(){
    string input;
    unsigned long long sum = 0;

    // Read input until the "END" line is encountered
    while (getline(cin, input) && input != "END") {
        unsigned long long num = atoll(input.c_str());
        sum += num;
    }

    // Output the result
    cout << sum;
}