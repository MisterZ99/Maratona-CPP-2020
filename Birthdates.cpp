#include <bits/stdc++.h>
using namespace std;

int main(){
string nome;
int i, n, dia, mes, ano;
vector<pair<pair<int, int>, pair<int, string>>> pessoas;
scanf("%d", &n);
for(i=0; i<n; i++){
	cin>>nome;
	scanf("%d %d %d", &dia, &mes, &ano);
	pessoas.push_back(make_pair(make_pair(ano, mes), make_pair(dia, nome)));
}
sort(pessoas.begin(), pessoas.end());
cout<<pessoas[pessoas.size()-1].second.second<<"\n"<<pessoas[0].second.second;
return 0;
}
