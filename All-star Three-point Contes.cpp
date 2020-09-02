#include <bits/stdc++.h> //Tem que ignorar o case sensitive
using namespace std;

bool compara_string(string a, string b){
	int tamanho_a = a.size();
	int tamanho_b = b.size();
	int i;
	for(i=0; i<tamanho_a; i++){
		if(a[i] > 64 && a[i] < 91){
			a[i] += 32;
		}
	}
	for(i=0; i<tamanho_b; i++){
		if(b[i] > 64 && b[i] < 91){
			b[i] += 32;
		}
	}
	return a < b;
}

bool criterio(pair<string, int> a, pair<string, int> b){
	return (a.second > b.second) || (a.second == b.second && compara_string(a.first, b.first));
}

int main(){
int P, i, j, k, pontuacao, caso=1;
string palavra, jogador;
vector<pair<string, int>> jogadores;
while(scanf("%d", &P) != EOF){
	cin.ignore();
	printf("Case %d:\n", caso);
	for(i=0; i<P; i++){
		getline(cin, palavra);
		for(j=0; palavra[j]!=';'; j++){
			jogador.push_back(palavra[j]);
		}		
		pontuacao=0;
		for(j+=1, k=0; k<25; j+=2, k++){
			if(palavra[j] == '1'){
				if(k!=4 && k!=9 && k!=14 && k!=19 && k!=24){
					pontuacao += 1;
				}
				else{
					pontuacao += 2;
				}
			}
		}
		jogadores.push_back(make_pair(jogador, pontuacao));
		jogador.clear();
		palavra.clear();
	}
	sort(jogadores.begin(), jogadores.end(), criterio);
	for(i=0; i<P; i++){
		cout<<jogadores[i].first<<" "<<jogadores[i].second<<endl;
	}
	jogadores.clear();
	caso++;
}
return 0;
}
