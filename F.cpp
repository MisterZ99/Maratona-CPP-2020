#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int T, N, K, i, j, valor, vencedor, contador;
	vector<pair<long long int, long long int>> derrotados;
	vector<long long int> forca_max;
	queue<pair<long long int, long long int>> competidores;
	pair<long long int, long long int> c1, c2;
	scanf("%lld", &T);
	for(i=0; i<T; i++){
		scanf("%lld %lld", &N, &K);
		contador = N;
		N = (long long int)pow((double)2, N);
		for(j=0; j<N; j++){
			scanf("%lld", &valor);
			competidores.push(make_pair(j+1, valor));
			forca_max.push_back(valor);
		}
		while(1){
			c1 = competidores.front();
			competidores.pop();
			if(competidores.empty()==true){
				vencedor = c1.first;
				break;
			}
			else{
				c2 = competidores.front();
				competidores.pop();
				if(c1.second>=c2.second){
					derrotados.push_back(make_pair(c1.first, c2.first));
					c1.second -= c2.second;
					c1.second += K;
					if(c1.second>forca_max[c1.first-1]){
						c1.second = forca_max[c1.first-1];
					}
					competidores.push(c1);					
				}
				else{
					derrotados.push_back(make_pair(c2.first, c1.first));
					c2.second -= c1.second;
					c2.second += K;
					if(c2.second>forca_max[c2.first-1]){
						c2.second = forca_max[c2.first-1];
					}
					competidores.push(c2);
				}
			}
		}
		printf("%lld\n", vencedor);
		for(j=0; j<N-1; j++){
			if(derrotados[j].first == vencedor){
				printf("%lld", derrotados[j].second);
				contador--;
				if(contador>0){
					printf(" ");
				}
				else{
					printf("\n");
				}
			}
		}
		derrotados.clear();
		forca_max.clear();
	}
    return 0;
}
