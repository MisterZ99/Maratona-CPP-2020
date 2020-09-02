#include <bits/stdc++.h>
using namespace std;

unsigned long long int fatorial(unsigned long long int n){
if(n==0 || n==1){
	return 1;
}
else{
	return (fatorial(n-1))*n;
}
}

int main(){
unsigned long long int T, n, i, j, soma, fator, delimitador, contador, limite, sinal;
vector<unsigned long long int> fatoriais;
vector<int> numeros;
cin>>T;
numeros.resize(21);
for(i=0; i<21; i++){
	fatoriais.push_back(fatorial(i));
}
for(i=0; i<T; i++){
	printf("Case %llu: ", i+1);
	sinal = 1;
	for(j=0; j<21; j++){
		numeros[j] = -1;
	}
	soma = 0;
	cin>>n;
	for(j=0; j<21; j++){
		soma += fatoriais[j];
		numeros[j] = j;
		if(soma >= n){
			break;
		}
	}
	limite = j;
	delimitador = j+1;
	while(soma != n){
		contador = 0;
		j = 0;
		while(soma > n){
			soma -= fatoriais[j];
			numeros[j] = -1;
			j++;
			contador++;
			if(contador==delimitador){
				soma = n;
				printf("impossible");
				sinal = 0;
				break;
			}
		}
		contador = 0;
		j = 0;
		while(soma < n){
			soma += fatoriais[j];
			numeros[j] = j;
			j++;
		}
		delimitador--;
	}
	if(sinal == 1){
		for(j=0; j<=limite; j++){
			if(numeros[j] != -1){
				if(j != limite){
					printf("%d!+", numeros[j]);
				}
				else{
					printf("%d!", numeros[j]);
				}
			}
		}
	}
	printf("\n");
}
return 0;
}
