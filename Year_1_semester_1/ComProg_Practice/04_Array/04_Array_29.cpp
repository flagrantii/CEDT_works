#include<bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> vec;

int overlap_area(int area1[],int area2[]) {
    int w = min(area1[2],area2[2])-max(area1[0],area2[0]);
    int h = min(area1[3],area2[3])-max(area1[1],area2[1]);
    if(w <= 0 or h <= 0) return 0;
    return w*h;
}

main() {
    int num; 
    cin>>num;
    int arr[num][4];
    for(int i=0; i<num; i++) {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
    }
    int MAX = 0;
    for(int i=0;i<num;i++) {
        for(int j=i+1;j<num;j++) {
            int area = overlap_area(arr[i],arr[j]);
            vec.push_back(make_tuple(area,i,j));
            MAX = max(MAX, area);
        }
        
    }
    if(MAX == 0) {
        cout<<"No overlaps";
        return 0;
    }
    else 
    cout << "Max overlapping area = "<<MAX<<"\n";
        for(auto i : vec) {
            if(get<0>(i)==MAX)
                cout << "rectangles "<<get<1>(i)<<" and "<<get<2>(i)<<"\n";
        }
    
}