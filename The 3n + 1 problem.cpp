#include <bits/stdc++.h>
using namespace std;

int algoritmo(int x){
int contador=1;
if(x==1){
	return 1;
}
else{
	while(x!=1){
		if(x%2==0){
			x /= 2;
			contador++;
		}
		else{
			x = 3*x + 1;
			contador++;
		}
	}
	return contador;
}
}

int main(){
int i, j, iterador, resposta, resposta_aux;
while(scanf("%d %d", &i, &j) != EOF){
	if(i<=j){
		iterador = i;
		resposta = 0;
		while(iterador<=j){
			resposta_aux = algoritmo(iterador);
			if(resposta_aux > resposta){
				resposta = resposta_aux;
			}
			iterador++;
		}
		printf("%d %d %d\n", i, j, resposta);
	}
	else{
		iterador = j;
		resposta = 0;
		while(iterador<=i){
			resposta_aux = algoritmo(iterador);
			if(resposta_aux > resposta){
				resposta = resposta_aux;
			}
			iterador++;
		}
		printf("%d %d %d\n", i, j, resposta);
	}
}
return 0;
}
