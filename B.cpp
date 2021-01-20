#include <bits/stdc++.h>
using namespace std;

int main(){
    int cargos, descricoes, i, salario, resposta;
    string cargo;
    map<string, int> CS;
    scanf("%d %d", &cargos, &descricoes);
    for(i=0; i<cargos; i++){
        cin>>cargo;
        scanf("%d", &salario);
        CS.insert(make_pair(cargo, salario));
        CS[cargo] = salario;
    }
    for(i=0; i<descricoes; i++){
        resposta = 0;
        while(cargo != "."){
            cin>>cargo;
            if(CS.find(cargo)!=CS.end()){
                resposta += CS[cargo];
            }
        }
        printf("%d\n", resposta);
        cargo = "";
    }
    return 0;
}