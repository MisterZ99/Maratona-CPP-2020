#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, w, pessoa;
    char p;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> disponiveis;
    priority_queue<pair<int,int>> ocupados;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &w);
        disponiveis.push(make_pair(w,i));
    }
    n *= 2;
    for(i=0; i<n; i++){
        scanf(" %c", &p);
        pessoa = (int)p - 48;
        if(pessoa==0){
            printf("%d ", disponiveis.top().second+1);
            ocupados.push(disponiveis.top());
            disponiveis.pop();
        }
        else{
            printf("%d ", ocupados.top().second+1);
            ocupados.pop();
        }
    }
    return 0;
}
