#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
//11725 B049 트리의 부모 찾기
/*
루트 없는 트리가 주어진다. 이때, 트리의 루트를 1이라고 정했을 때, 
각 노드의 부모를 구하는 프로그램을 작성하시오.
노드의 개수 N (2 ≤ N ≤ 100,000)
첫째 줄부터 N-1개의 줄에 
각 노드의 부모 노드 번호를 2번 노드부터 순서대로 출력한다.
*/

int n, a, b, parents = 1;
vector<vector<int> > g; //graph
vector<int> p; //parents
int visit[100001];



void dfs(int v){ //v노드에 대해... 
    int next = -1;
    visit[v] = true;
    p[v] = parents;
    //cout << v << " ";

    for(int i = 0; i < g[v].size(); i++){
        if(!visit[g[v][i]]){ //인접 미방문 노드를 찾으면 다음은 너로정했다
            next = g[v][i];
            parents = v;
            dfs(next);
        }
    }

    if(next == -1) return;
    else parents = v;
    

}





int main(void){
    //cin >> n;
    scanf("%d", &n);
    g.resize(n+1);
    p.resize(n+1);
    fill(visit, visit+100001, false); //reset

    for(int i = 1; i < n; i++){
        scanf("%d %d", &a, &b);
        //cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    //cout << "asdfadf";
    //for(int i = 0; i < n-1; i++) sort(g[i].begin(), g[i].end());

    dfs(1);

    for(int i = 2; i <= n; i++) printf("%d\n", p[i]);
    //cout << p[i] << endl;

    return 0;



}