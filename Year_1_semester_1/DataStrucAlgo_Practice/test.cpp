#include <bits/stdc++.h>
using namespace std ; 
//Dijkstra algorithm
int main () {
    ios_base :: sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    int n , m ; 
    cin >> n >> m ; 
    vector<vector<int>> vec(n , vector<int>(m)) ; 

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> vec[i][j] ; 
        }
    }
    pair<int,int> moves[] = {{-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1}} ; 
    priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>>> pq ; 
    pq.push({0 , {0 , 0}}) ; 
    vector<vector<int>> dist(n , vector<int>(m , 1000000000)) ; 
    dist[0][0] = 0 ; 
    while (!pq.empty()) {

        int nowi = pq.top().second.first ; 
        int nowj = pq.top().second.second ; 
        int w = pq.top().first ; 
        pq.pop() ; 

        if (dist[nowi][nowj] < w)
            continue ; 
        
        for (int i = 0 ; i < 4 ; i++) {
            int nexti = nowi + moves[i].first ; 
            int nextj = nowj + moves[i].second ; 
            if (nexti >= 0 && nexti < n && nextj >= 0 && nextj < m) {
                if (w + vec[nexti][nextj] < dist[nexti][nextj]) {
                    dist[nexti][nextj] = w + vec[nexti][nextj] ; 
                    pq.push({w + vec[nexti][nextj] , {nexti, nextj}}) ; 
                }
            }
        }
        
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << dist[i][j] << " " ; 
        }
        cout << endl ;
    }
}