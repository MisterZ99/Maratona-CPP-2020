#include <bits/stdc++.h>
using namespace std;

int main(){
int n, tamanho, i, numero, coringa;
vector<int> caminhoes;
queue<int> fila;
stack<int> pilha;
scanf("%d", &n);
while(n!=0){
	tamanho = n;
	for(i=0; i<n; i++){
		scanf("%d", &numero);
		fila.push(numero);
	}
	numero = fila.front();
	fila.pop();
	pilha.push(numero);
	while(fila.empty()==false){
		numero = fila.front();
		fila.pop();
		if(fila.empty()==false){
			if(numero<pilha.top()){
				if(numero<fila.front()){
					caminhoes.push_back(numero);
				}
				else{
					pilha.push(numero);
				}
			}
			else{
				while(numero>pilha.top()){
					coringa = pilha.top();
					pilha.pop();
					caminhoes.push_back(coringa);
					if(pilha.empty()==true){
						break;
					}
				}
				pilha.push(numero);
			}
		}
		else{
			if(numero<pilha.top()){
				caminhoes.push_back(numero);
			}
			else{
				while(numero>pilha.top()){
					coringa = pilha.top();
					pilha.pop();
					caminhoes.push_back(coringa);
					if(pilha.empty()==true){
						break;
					}
				}
				pilha.push(numero);
			}
		}
	}
	while(pilha.empty()==false){
		numero = pilha.top();
		pilha.pop();
		caminhoes.push_back(numero);	
	}
	tamanho--;
	for(i=0; i<tamanho; i++){
		if(caminhoes[i]>caminhoes[i+1]){
			printf("no\n");
			break;
		}
	}
	if(i==tamanho){
		printf("yes\n");
	}
	caminhoes.clear();
	scanf("%d", &n);
}
return 0;
}