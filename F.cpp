#include <bits/stdc++.h>
using namespace std;

int main(){
int t, x1, y1, i, x2, y2, r1, r2;
double distancia, diferenca;
scanf("%d", &t);
for(i=0; i<t; i++){
	scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
	distancia = sqrt(pow((double)(x1-x2), 2) + pow((double)(y1-y2), 2));
	diferenca = sqrt(pow((double)(r1-r2), 2));
	if(distancia == diferenca){
		printf("E\n");
	}
	else{
		if(distancia < diferenca){
			printf("I\n");
		}
		else{
			printf("O\n");
		}
	}
}
return 0;
}
