priority_queue<pair<int,int>> pq;
        // pq.push({0,1});
        // while(!pq.empty()){
        //     int u,v;
        //     tie(u,v) = pq.top();
        //     pq.pop();
        //     for(auto j:arr[v]){
        //         int w,x;
        //         tie(w,x) = j;
        //         if(dist[x]>dist[v]+w){
        //             dist[x] = dist[v]+w;
        //             pq.push({-dist[x],x});
        //         }
        //     }
        // }
        // cout<<dist[2]<<" ";