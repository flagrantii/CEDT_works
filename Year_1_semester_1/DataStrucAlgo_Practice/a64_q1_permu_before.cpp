#include <bits/stdc++.h>
using namespace std;

void permute(vector<int>& curr, unordered_set<int>& used, int n, vector<vector<int>>& permutations) {
    if (curr.size() == n) {
        permutations.push_back(curr);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (used.find(i) == used.end()) {
            curr.push_back(i);
            used.insert(i);
            permute(curr, used, n, permutations);
            curr.pop_back();
            used.erase(i);
        }
    }
}

vector<vector<int>> generatePermutations(int n) {
    vector<vector<int>> permutations;
    vector<int> curr;
    unordered_set<int> used;
    permute(curr, used, n, permutations);
    return permutations;
}

main() {
    int n;cin >> n;

    vector<vector<int>> result = generatePermutations(n);

    for (const auto& perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "\n";
    }
}
