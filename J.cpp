#include <bits/stdc++.h>
using namespace std;

int main(){
int a, b, CD, tamanho, i, tamanho_col;
set<int> colecao;
scanf("%d %d", &a, &b);
while(a!=0 && b!=0){
	tamanho = a+b;
	for(i=0; i<tamanho; i++){
		scanf("%d", &CD);
		colecao.insert(CD);
	}
	tamanho_col = colecao.size();
	printf("%d\n", tamanho-tamanho_col);
	scanf("%d %d", &a, &b);
	colecao.clear();
}
return 0;
}
