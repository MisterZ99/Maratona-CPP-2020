#include <bits/stdc++.h>
using namespace std;

int main(){
long long int T, k, soma, i, quant;
vector<long long int> elementos;
scanf("%lld", &T);
for(i=0; i<T; i++){
	scanf("%lld", &k);
	if(k<0){
		k *= -1;
	}
	soma = 1;
	quant = 2;
	while(soma < k){
		soma += quant;
		quant++;
	}
	while((soma-k)%2!=0){
		soma += quant;
		quant++;
	}
	if(i!=T-1){
		printf("%lld\n\n", quant-1);
	}
	else{
		printf("%lld\n", quant-1);
	}
}
return 0;
}
