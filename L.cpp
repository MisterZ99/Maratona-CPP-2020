#include <bits/stdc++.h>
using namespace std;

int main(){
long long int n, valor, tamanho, soma, i, parcela;
priority_queue<long long int, vector<long long int>, greater<long long int>> numeros;
scanf("%lld", &n);
while(n!=0){
	while(n>0){
		scanf("%lld", &valor);
		numeros.push(valor);
		n--;
	}
	tamanho = numeros.size();
	soma = 0;
	while(tamanho != 1){
		parcela = 0;
		parcela += numeros.top();
		numeros.pop();
		tamanho--;
		parcela += numeros.top();
		numeros.pop();
		tamanho--;
		numeros.push(parcela);
		tamanho++;
		soma += parcela;
	}
	numeros.pop();
	printf("%lld\n", soma);
	scanf("%lld", &n);
}
return 0;
}
