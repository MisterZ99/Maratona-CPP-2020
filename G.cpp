#include <bits/stdc++.h>
using namespace std;

int main(){
int tela_grande[4], q1, q2, p1, p2, preco_aux, preco, Q_telas_pequenas, i, tela_pequena[5], quocientes[4];
while(scanf("%d %d %d %d", &tela_grande[0], &tela_grande[1], &tela_grande[2], &tela_grande[3]) != EOF){
	preco = 1000000000;
	scanf("%d", &Q_telas_pequenas);
	for(i=0; i<Q_telas_pequenas; i++){
		scanf("%d %d %d %d %d", &tela_pequena[0], &tela_pequena[1], &tela_pequena[2], &tela_pequena[3], &tela_pequena[4]);
		if(tela_grande[0]%tela_pequena[0] != 0){
			quocientes[0] = (tela_grande[0]/tela_pequena[0]) + 1;
		}
		else{
			quocientes[0] = (tela_grande[0]/tela_pequena[0]);
		}
		if(tela_grande[1]%tela_pequena[1] != 0){
			quocientes[1] = (tela_grande[1]/tela_pequena[1]) + 1;
		}
		else{
			quocientes[1] = (tela_grande[1]/tela_pequena[1]);
		}
		if(tela_grande[2]%tela_pequena[2] != 0){
			quocientes[2] = (tela_grande[2]/tela_pequena[2]) + 1;
		}
		else{
			quocientes[2] = (tela_grande[2]/tela_pequena[2]);
		}
		if(tela_grande[3]%tela_pequena[3] != 0){
			quocientes[3] = (tela_grande[3]/tela_pequena[3]) + 1;
		}
		else{
			quocientes[3] = (tela_grande[3]/tela_pequena[3]);
		}
		if(quocientes[0] > quocientes[2]){
			q1 = quocientes[0];
		}
		else{
			q1 = quocientes[2];
		}
		if(quocientes[1] > quocientes[3]){
			q2 = quocientes[1];
		}
		else{
			q2 = quocientes[3];
		}
		p1 = q1*q2;
		if(tela_grande[1]%tela_pequena[0] != 0){
			quocientes[0] = (tela_grande[1]/tela_pequena[0]) + 1;
		}
		else{
			quocientes[0] = (tela_grande[1]/tela_pequena[0]);
		}
		if(tela_grande[0]%tela_pequena[1] != 0){
			quocientes[1] = (tela_grande[0]/tela_pequena[1]) + 1;
		}
		else{
			quocientes[1] = (tela_grande[0]/tela_pequena[1]);
		}
		if(tela_grande[3]%tela_pequena[2] != 0){
			quocientes[2] = (tela_grande[3]/tela_pequena[2]) + 1;
		}
		else{
			quocientes[2] = (tela_grande[3]/tela_pequena[2]);
		}
		if(tela_grande[2]%tela_pequena[3] != 0){
			quocientes[3] = (tela_grande[2]/tela_pequena[3]) + 1;
		}
		else{
			quocientes[3] = (tela_grande[2]/tela_pequena[3]);
		}
		if(quocientes[0] > quocientes[2]){
			q1 = quocientes[0];
		}
		else{
			q1 = quocientes[2];
		}
		if(quocientes[1] > quocientes[3]){
			q2 = quocientes[1];
		}
		else{
			q2 = quocientes[3];
		}
		p2 = q1*q2;
		if(p1<p2){
			preco_aux = p1*tela_pequena[4];
		}
		else{
			preco_aux = p2*tela_pequena[4];
		}
		if(preco_aux < preco){
			preco = preco_aux;
		}
	}
	printf("%d\n", preco);
}
return 0;
}
