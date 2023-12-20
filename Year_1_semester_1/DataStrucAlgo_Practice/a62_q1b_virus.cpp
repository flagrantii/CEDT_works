#include<bits/stdc++.h>
using namespace std;

bool checkvirus(vector<int> arr, int k) {
    if (k == 1) {
        return arr[0] == 0 && arr[1] == 1;
    }
    else {
        vector<int> left(arr.begin(), arr.begin() + arr.size()/2);
        vector<int> right(arr.begin() + arr.size()/2, arr.end());
        vector<int> reverse(left.rbegin(), left.rend()); 

        return((checkvirus(left,k-1) or checkvirus(reverse,k-1)) and checkvirus(right,k-1));
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int size = pow(2, k);
    vector<int> arr(size + 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[j];
        }
        if (checkvirus(arr, k)) {
            cout << "yes" << "\n";
        }else cout << "no" << "\n";
    }
    return 0;
}