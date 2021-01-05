#include <bits/stdc++.h>
using namespace std;

int main(){
int n, L, contador, topo;
stack<int> sobreviventes;
vector<int> s;
scanf("%d", &n);
while(n>0){
	scanf("%d", &L);
	sobreviventes.push(L);
	n--;
}
while(sobreviventes.empty()==false){
	topo = sobreviventes.top();
	s.push_back(topo);
	contador = topo;
	sobreviventes.pop();
	while(sobreviventes.empty()==false && contador>0){
		contador--;
		if(contador<sobreviventes.top()){
			contador = sobreviventes.top();
		}
		sobreviventes.pop();
	}
}
contador = s.size();
printf("%d\n", contador);
return 0;
}
