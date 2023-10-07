// code for the implementation of dijkstra algorithm

#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // creating the adjacency list
    unordered_map<int , list<pair<int,int>>> adj;
    for(int i=0 ; i<edges ; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    //creating the distance vector and initializing with int_max
    vector<int> dist(vertices);
    for(int i=0 ; i<vertices ; i++)
        dist[i] = INT_MAX;

    //creating a set of distance and node
    set<pair<int,int>> s;

    //initialing with zero
    dist[source] = 0;
    s.insert(make_pair(0,source));

    //traversing through the set and adjacency list
    while(!s.empty()){
        //taking out top
        auto top = *(s.begin());

        //calculating the distance and node
        int distance = top.first;
        int node = top.second;

        //removing the top of the set
        s.erase(s.begin());

        for(auto i:adj[node]){
            if(dist[i.first] > i.second+distance){

                //checking if the value already exist in the set
                auto record = s.find(make_pair(dist[i.first] , i.first));
                if(record != s.end())
                    s.erase(record);

                //updating the distance array and set
                dist[i.first] = i.second+distance;
                s.insert(make_pair(i.second+distance , i.first));
            }
        }
    }

    //returning the distance array
    return dist;
}
