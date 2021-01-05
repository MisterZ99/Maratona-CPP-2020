#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<vector<long long int>> combinacoes;
	vector<long long int> valores;
	long long int N, i, j, resposta;
	combinacoes.resize(10000);
	for(i=0; i<10000; i++){
		combinacoes[i].resize(6);
	}
	scanf("%lld", &N);
	while(N!=0){
		valores.resize(N);
		if(N==1){
			printf("1\n");
		}
		else{
			for(i=0; i<N; i++){
				combinacoes[i][6]=1;
				scanf("%lld %lld %lld %lld %lld", &combinacoes[i][0], &combinacoes[i][1], &combinacoes[i][2], &combinacoes[i][3], &combinacoes[i][4]);
				sort(combinacoes[i].begin(), combinacoes[i].begin()+5);
			}
			for(i=1; i<N; i++){
				for(j=0; j<i; j++){
					if(combinacoes[i][0] == combinacoes[j][0] && combinacoes[i][1] == combinacoes[j][1] && combinacoes[i][2] == combinacoes[j][2] && combinacoes[i][3] == combinacoes[j][3] && combinacoes[i][4] == combinacoes[j][4]){
						combinacoes[j][6]++;
						break;
					}
				}
			}
			for(i=0; i<N; i++){
				valores[i] = combinacoes[i][6];
			}
			sort(valores.begin(), valores.end());
			resposta = valores[N-1];
			for(i=N-2; i>-1; i--){
				if(valores[i]==valores[N-1]){
					resposta += valores[i];
				}
				else{
					break;
				}
			}
			printf("%lld\n", resposta);
		}
		scanf("%lld", &N);
	}
    return 0;
}







