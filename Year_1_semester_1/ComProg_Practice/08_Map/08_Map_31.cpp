#include<bits/stdc++.h>
using namespace std;

main(){
    map<string,int> facl;
    vector<tuple<double,string,vector<string>>> student;

    int n;
    cin>>n;
    while (n--)
    {
        string name_facl;
        int num_facl;
        cin>>name_facl>>num_facl;

        facl[name_facl] = num_facl;
    }

    int std_num;
    cin>>std_num;
    while (std_num--)
    {
        string stdid;
        double grade;
        vector<string> stdfac;
        cin>>stdid>>grade;

        for(int i=0;i<4;i++){
            string order ; cin>>order;
            stdfac.push_back(order);
        }
        student.push_back(make_tuple(-grade,stdid,stdfac));
    }
    sort(student.begin(),student.end());

    vector<pair<string,string>> out;
    for(auto e:student){
        for(auto m: get<2>(e)){
            auto b = facl.find(m);
            if(b != facl.end() and (*b).second!=0 ){
                --((*b).second);
                out.push_back(make_pair(get<1>(e),(*b).first));
                break;
            }
        }
        cout<<"\n";
    }
    sort(out.begin(),out.end());
    for(auto d:out){
        cout<<d.first<<" "<<d.second<<"\n";
    }
    
    
}