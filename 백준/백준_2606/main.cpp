#include <iostream>
#include <vector>
using namespace std;

int N, S, answer = 0;
bool visited[101] = { false, };
vector <vector <int> > com_graph;

void dfs(int cur){
    visited[cur] = true;
    
    for(int i=0; i<com_graph[cur].size(); i++){
        
        if(visited[com_graph[cur][i]] == false){
            dfs(com_graph[cur][i]);
            answer++;
        }
    }
}

int main(void) {
    cin >> N >> S;
    
    com_graph.resize(N+1);
    
    int a,b;
    while(S--){
        cin >> a >> b;
        com_graph[a].push_back(b);
        com_graph[b].push_back(a);
    }
    
    /*
     1배열 - 2
     2배열 - 1
     
     2배열 - 1, 3
     3배열 - 2
     
     1배열 - 2, 5
     5배열 - 1
     
     5배열 - 1, 2
     2배열 - 1, 3, 5
     
     5배열 - 1, 2, 6
     6배열 - 5
     
     4배열 - 7
     7배열 - 4
     */
    
    /*
     1배열 - 2,5
     2배열 - 1,3,5
     3배열 - 2
     4배열 - 7
     5배열 - 1,2,6
     6배열 - 5
     7배열 - 4
     */
    
    dfs(1);
    cout << answer << "\n";
    
    return 0;
}
