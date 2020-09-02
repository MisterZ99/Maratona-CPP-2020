#include <bits/stdc++.h>
using namespace std;

int main(){
unsigned long long int x0, y0, sinal, bananas, bananas2;
int m, b;
pair<int, int> par_ordenado, coringa;
scanf("%d %d", &m, &b);
x0 = m*b;
y0 = 0;
par_ordenado.first = x0;
par_ordenado.second = 0;
coringa.first = par_ordenado.first;
coringa.second = par_ordenado.second;
sinal = 0;
bananas = x0*(x0+1)/2;
while(coringa.first>0){
	if(sinal == 0){
		coringa.second++;
	}
	else{
		coringa.first--;
		
	}
	if((float)(coringa.second-b)/coringa.first > (float)-1/m){
		sinal = 1;
	}
	else{
		sinal = 0;
		par_ordenado = coringa;
		bananas2 = ((unsigned long long int)par_ordenado.second+1)*(((unsigned long long int)par_ordenado.first*((unsigned long long int)par_ordenado.first+1))/2) +((unsigned long long int)par_ordenado.first+1)*(((unsigned long long int)par_ordenado.second*((unsigned long long int)par_ordenado.second+1))/2);
		if(bananas2 > bananas){
			bananas = bananas2;
		}
		else{
			break;
		}
	}
}
cout<<bananas;
return 0;
}
