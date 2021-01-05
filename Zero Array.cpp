#include <bits/stdc++.h>
using namespace std;
    
int main(){
    int N, i, z;
    priority_queue<int> num;
    long long int soma=0;
    scanf("%d",&N);    
    for(i=0;i<N;i++){
        scanf("%d", &z);
        num.push(z);
        soma+=z;
    }
    if(soma%2 == 0 && soma-num.top() >= num.top()){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
