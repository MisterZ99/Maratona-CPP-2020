#include <bits/stdc++.h>
using namespace std;

int main(){
long long int m, x, valor_maximo;
double p, v, diferenca, lim, com, limite;
scanf("%lld %lld", &m, &x);
while(m!=0){
	limite = m-1;
	p=((double)1-((double)x/100));
	v = m*p;
	limite -= 0.000001;
	if(v > limite || x == 100){
		printf("Not found\n");
	}
	else{
		diferenca = limite - v;
		valor_maximo = (long long int)m + (long long int)(diferenca/p);
		printf("%lld\n", valor_maximo);
	}
	scanf("%lld %lld", &m, &x);
}
return 0;
}
