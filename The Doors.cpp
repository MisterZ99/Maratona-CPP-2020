#include <bits/stdc++.h>
using namespace std;

int main(){
int porta, n, i, k=0;
vector<int> ordem;
queue<int> direita, esquerda;
scanf("%d", &n);
for(i=0; i<n; i++){
	scanf("%d", &porta);
	ordem.push_back(porta);
	if(porta==0){
		esquerda.push(0);
	}
	else{
		direita.push(1);
	}
}
for(i=0; i<n; i++){
	k++;
	if(ordem[i]==0){
		esquerda.pop();
	}
	else{
		direita.pop();
	}
	if(esquerda.empty()==true || direita.empty()==true){
		break;
	}
}
printf("%d", k);

return 0;
}
