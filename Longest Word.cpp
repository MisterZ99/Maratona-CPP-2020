#include <bits/stdc++.h> //Sacanagem do caralho: se tiver caractere diferente de letra ou hífen no inicio ou final, ainda é palavra
using namespace std;

int main(){
string palavra, longest;
int tamanho=0, i, tamanho_aux;
cin>>palavra;
while(palavra != "E-N-D"){
	tamanho_aux = palavra.size();
	for(i=1; i<tamanho_aux-1; i++){
		if((palavra[i]<65 || palavra[i]>90) && (palavra[i]<97 || palavra[i]>122) && palavra[i]!='-'){
			tamanho_aux = 0;
			break;
		}
	}
	if((palavra[0]<65 || palavra[0]>90) && (palavra[0]<97 || palavra[0]>122) && palavra[0]!='-'){
		tamanho_aux--;
	}
	if((palavra[tamanho_aux-1]<65 || palavra[tamanho_aux-1]>90) && (palavra[tamanho_aux-1]<97 || palavra[tamanho_aux-1]>122) && palavra[tamanho_aux-1]!='-'){
		tamanho_aux--;
	}
	if(tamanho_aux > tamanho){
		tamanho = tamanho_aux;
		longest = palavra;
	}
	cin>>palavra;
}
tamanho = longest.size();
for(i=0; i<tamanho; i++){
	if(longest[i]>64 && longest[i]<91){
		longest[i]+=32;
		printf("%c", longest[i]);
	}
	else{
		if(longest[i]>96 && longest[i]<123 || longest[i]=='-'){
			printf("%c", longest[i]);
		}
	}
}
return 0;
}
