#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, x0, y0, stx, sty;
    int i, j;
    set<double> retas;
    scanf("%d %d %d", &n, &x0, &y0);
    for(i=0; i<n; i++){
        scanf("%d %d", &stx, &sty);
        if(stx-x0!=0){
            retas.insert(((double)sty-y0)/(stx-x0));
        }
        else{
            retas.insert(3.141592);
        }
    }
    printf("%d", retas.size());
    return 0;
}
