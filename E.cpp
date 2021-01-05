#include <bits/stdc++.h>
using namespace std;

int main(){
unsigned long long int c, l, m, j, i, comp_carro, viagens, carga;
queue<pair<unsigned long long int, string>> carros_esq, carros_dir;
pair<unsigned long long int, string> coringa;
string lado;
scanf("%llu", &c);
for(i=0; i<c; i++){
	scanf("%llu %llu", &l, &m);
	for(j=0; j<m; j++){
		cin>>comp_carro>>lado;
		if(lado == "left"){
			carros_esq.push(make_pair(comp_carro, lado));
		}
		else{
			carros_dir.push(make_pair(comp_carro, lado));
		}		
	}
	lado = "left";
	viagens = 0;
	l *= 100;
	while(carros_esq.empty()==false || carros_dir.empty()==false){
		if(lado=="left"){
			viagens++;
			lado = "right";
			if(carros_esq.empty()==false){
				carga = 0;
				while(carros_esq.empty()==false){
					carga += carros_esq.front().first;
					if(carga>l){
						break;
					}
					carros_esq.pop();
				}
			}
		}
		else{
			viagens++;
			lado = "left";
			if(carros_dir.empty()==false){
				carga = 0;
				while(carros_dir.empty()==false){
					carga += carros_dir.front().first;
					if(carga>l){
						break;
					}
					carros_dir.pop();
				}
			}
		}
	}
	printf("%llu\n", viagens);
}
return 0;
}
