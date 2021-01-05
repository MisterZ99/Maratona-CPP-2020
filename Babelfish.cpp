#include <bits/stdc++.h>
using namespace std;

int main(){
string palavra1, palavra2, palavra;
map<string, string> dicionario;
int tamanho, i;
while(getline(cin, palavra)){
	if(palavra==""){
		break;
	}
	else{
		tamanho = palavra.size();
		for(i=0; palavra[i]!=32; i++){
			palavra2.push_back(palavra[i]);
		}
		for(i+=1; i<tamanho; i++){
			palavra1.push_back(palavra[i]);
		}
		dicionario.insert(make_pair(palavra1, palavra2));
		dicionario[palavra1] = palavra2;
		palavra1.clear();
		palavra2.clear();
	}
}
while(getline(cin, palavra)){
	if(dicionario.find(palavra)==dicionario.end()){
		printf("eh\n");
	}
	else{
		cout<<dicionario[palavra]<<"\n";
	}
}
return 0;
}
