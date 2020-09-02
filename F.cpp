#include <bits/stdc++.h>
using namespace std;

int main(){
string n;
int tamanho, numero;
cin>>n;
tamanho = n.size();
if(tamanho==1){
	numero = (int)(n[0]-48);
}
else{
	numero = (int)10*(n[tamanho-2]-48) + (int)(n[tamanho-1]-48);
}
if(numero%4==0){
	printf("4");
}
else{
	printf("0");
}
return 0;
}
