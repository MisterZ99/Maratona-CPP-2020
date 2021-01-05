#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n, comando, valor, menor, i;
	string estoque;
	map<string, long long int> avaliaveis;
	scanf("%lld", &n);
	for(i=0; i<n; i++){
		cin>>comando>>estoque;
		if(comando==1){
			cin>>valor;
			avaliaveis.insert(make_pair(estoque, valor));
			avaliaveis[estoque] = valor;
		}
		else{
			if(comando==2){
				cin>>valor;
				avaliaveis[estoque] = valor;
			}
			else{
				menor = 2000000000;
				for(auto u:avaliaveis){
					if(u.second<menor){
						menor = u.second;
						estoque = u.first;
					}
				}
				cout<<estoque<<" "<<i+1<<endl;
				avaliaveis.erase(estoque);
			}
		}
	}
    return 0;
}
