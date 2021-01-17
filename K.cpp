#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, i, j, sinal, tamanho, tamanho_S;
    pair<int,int> codigo;
    string S, palavra;
    cin>>S;
    tamanho_S = S.size();
    scanf("%d", &N);
    while(N>0){
        codigo = make_pair(-1,-1);
        cin>>palavra;
        sinal = 1;
        tamanho = palavra.size();
        i = 0;
        j = 0;
        while(i<tamanho_S && j<tamanho){
            if(S[i]==palavra[j]){
                if(sinal==1){
                    sinal=0;
                    codigo.first = i;
                }
                codigo.second = i;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if(j==tamanho){
            printf("Matched %d %d\n", codigo.first, codigo.second);
        }
        else{
            printf("Not matched\n");
        }
        N--;
    }
    return 0;
}