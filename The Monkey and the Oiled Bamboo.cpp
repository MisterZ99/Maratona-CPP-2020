#include <bits/stdc++.h>
using namespace std;

vector<int> degraus;

bool teste(int fator_forca){
	int diferenca, k = fator_forca, tamanho = degraus.size()-1, i;
	diferenca = degraus[0];
	if(diferenca>k){
		return false;
	}
	else{
		if(diferenca==k){
			k--;
		}	
	}
	for(i=0; i<tamanho; i++){
		diferenca = degraus[i+1]-degraus[i];
		if(diferenca>k){
			return false;
		}
		else{
			if(diferenca==k){
				k--;
			}	
		}
	}
	return true;
}

int main(){
	int T, n, i, L, M, R, resposta, caso;
	scanf("%d", &T);
	caso = 1;
	while(T>0){
		L=0;
		R=10000000;
		scanf("%d", &n);
		degraus.resize(n);
		for(i=0; i<n; i++){
			scanf("%d", &degraus[i]);
		}
		while(L<=R){
			M = (L+R)/2;
			if(teste(M)){
				R = M-1;
				resposta = M;
			}
			else{
				L = M+1;
			}
		}
		printf("Case %d: %d\n", caso, resposta);
		caso++;
		T--;
	}
	return 0;
}
