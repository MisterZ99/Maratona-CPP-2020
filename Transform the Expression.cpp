#include <bits/stdc++.h>
using namespace std;

int main(){
int tamanho, t, i;
char c;
stack<char> operadores;
string palavra;
scanf("%d", &t);
while(t>0){
	cin>>palavra;
	tamanho = palavra.size();
	for(i=0; i<tamanho; i++){
		if(palavra[i] == '+' || palavra[i] == '-' || palavra[i] == '*' || palavra[i] == '/' || palavra[i] == '^'){
			operadores.push(palavra[i]);
		}
		else{
			if(palavra[i] == ')'){
				c = operadores.top();
				operadores.pop();
				printf("%c", c);
			}
			else{
				if(palavra[i]>96 && palavra[i]<123){
					printf("%c", palavra[i]);
				}
			}
		}
	}
	printf("\n");
	t--;
}
return 0;
}
