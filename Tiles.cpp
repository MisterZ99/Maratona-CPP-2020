#include <bits/stdc++.h>
using namespace std;

int main(){
int w, h, soma, resposta, resposta_aux, constante = 998244353;
scanf("%d %d", &w, &h);
soma = h+w;
resposta = 1;
while(soma>0){
	resposta_aux = resposta*2;
	resposta = (resposta_aux%constante);
	soma--;
}
printf("%d", resposta);
return 0;
}
