// cpp code to find the shortest distance in a graph from a source node to every node
// this code usesw a simple loigc of maintaing the distance array and updating its valoue

#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
using namespace std;

class Graph
{
public:
    unordered_map<int , list<pair<int,int>>> adj;

    void addNode(int u, int v, int weight){
        pair<int,int> p = make_pair(v , weight);
        adj[u].push_back(p);
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<"["<<j.first<<","<<j.second<<"] ";
            }
            cout<<endl;
        }
    }

    void dfs(unordered_map<int,bool> &visited , stack<int> &s , int node){
        visited[node] = true;

        for(auto i: adj[node]){
            if(!visited[i.first]){
                dfs(visited , s , i.first);
            }
        }

        s.push(node);
    }

    void getShortestPath(stack<int> &s , vector<int> &distance , int src){
        distance[src] = 0;

        while(!s.empty()){
            int top = s.top();
            s.pop();

            if(distance[top] != INT_MAX){
                for(auto i:adj[top]){
                    if(distance[top]+i.second < distance[top])
                        distance[top] = distance[top]+i.second;
                }
            }else{
                for(auto i:adj[top]){

                }
            }
        }
    }
};

int main()
{
    Graph g;
    g.addNode(0,1,5);
    g.addNode(0,2,3);
    g.addNode(1,2,2);
    g.addNode(1,3,6);
    g.addNode(2,3,7);
    g.addNode(2,4,4);
    g.addNode(2,5,2);
    g.addNode(3,4,-1);
    g.addNode(4,5,-2);

    g.printAdjList();

    //creating the topological sort

    unordered_map<int,bool> visited;
    stack<int> s;

    for(int i=0 ; i<6 ; i++){
        if(!visited[i]){
            g.dfs(visited , s , i);
        }
    }

    int src = 1;
    vector<int> distance(6);
    for(int i=0 ; i<6 ; i++){
        distance[i] = INT_MAX;
    }

    distance[src] = 0;

    g.getShortestPath(s , distance , src);

    for(auto i:distance){
        cout<<i<<",";
    }
}
