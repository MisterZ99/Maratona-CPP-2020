#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, ts1, ts2, resposta;
    string s1, s2;
    cin>>s1;
    cin>>s2;
    ts1 = s1.size();
    ts2 = s2.size();
    i=0;
    j=0;
    resposta = 0;
    while(i<ts1 && j<ts2){
        if(s2[j]==s1[i]){
            resposta++;
            i++;
        }
        j++;
    }
    printf("%d\n", resposta);
    return 0;
}
