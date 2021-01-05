#include <bits/stdc++.h>
using namespace std;

int main(){
string palavra, resultado = "No";
int tamanho, i;
stack<char> jogo;
cin>>palavra;
tamanho = palavra.size();
for(i=0; i<tamanho; i++){
	if(jogo.empty() == true){
		jogo.push(palavra[i]);
	}
	else{
		if(palavra[i] == jogo.top()){
			jogo.pop();
			if(resultado == "No"){
				resultado = "Yes";
			}
			else{
				resultado = "No";
			}
		}
		else{
			jogo.push(palavra[i]);
		}
	}
}
cout<<resultado<<"\n";
return 0;
}
