#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
//1260 B006 DFS와 BFS
/*
정점node의 개수 N(1 ≤ N ≤ 1,000), 간선edge의 개수 M(1 ≤ M ≤ 10,000), 
탐색을 시작할 정점의 번호 start node V
*/

int n, m, v;
vector<vector<int> > g;
bool visit[1001];


void sortAll(){

    for(int i = 0; i < g.size(); i++){
        sort(g[i].begin(), g[i].end());
    }

}


void dfs(int v){
    int next = -1;
    visit[v] = true;
    cout << v << " ";

    for(int i = 0; i < g[v].size(); i++){
        if(!visit[g[v][i]]){ //인접 미방문 노드를 찾으면 다음은 너로정했다
            next = g[v][i];
            dfs(next);
        }
    }

    if(next == -1) return;
    

}


//print the sequence of DFS from v
void DFS(int v){
    
    fill(visit, visit+1001, false); //reset

    dfs(v); //recursion call

    cout << endl;

}



//print the sequence of BFS from v
void BFS(int v){

    fill(visit, visit+1001, false); //reset
    queue<int> q;
    q.push(v);
    visit[v] = true;
    cout << v << " ";

    //until queue is empty
    while(!q.empty()){
        int cur = q.front(); //set the current node

        //about the edgesof cur node... 
        for(int i = 0; i < g[cur].size(); i++){
            if(visit[g[cur][i]]) continue; //skip if its visited one
            
            q.push(g[cur][i]);
            visit[g[cur][i]] = true;
            cout << g[cur][i] << " ";
        }

        q.pop();
        
    }
    cout << endl;

}



int main(void){

    //get input
    cin >> n >> m >> v;
    g.resize(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    sortAll();

    //start DFS from v
    DFS(v);

    //start BFS from v
    BFS(v);



    return 0;
}