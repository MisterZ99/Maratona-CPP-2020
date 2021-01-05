#include <bits/stdc++.h>
using namespace std;

int contador, contador_coringa;
vector<vector<int>> tabuleiro;

void cavalo(int i, int j, int n){
	int a, b;
	/*for(a=0; a<n; a++){
		for(b=0; b<10; b++){
			printf("%d ", tabuleiro[a][b]);
		}
		printf("\n");
	}
	printf("\n");*/
	if((i-2)>-1){
		if((j-1)>-1){
			if(tabuleiro[i-2][j-1] == 0){
				tabuleiro[i-2][j-1] = 1;
				contador_coringa++;
				cavalo(i-2,j-1,n);
				contador_coringa--;
				tabuleiro[i-2][j-1] = 0;
			}
		}
		if((j+1)<10){
			if(tabuleiro[i-2][j+1] == 0){
				tabuleiro[i-2][j+1] = 1;
				contador_coringa++;
				cavalo(i-2,j+1,n);
				contador_coringa--;
				tabuleiro[i-2][j+1] = 0;
			}
		}
	}
	if((i-1)>-1){
		if((j-2)>-1){
			if(tabuleiro[i-1][j-2] == 0){
				tabuleiro[i-1][j-2] = 1;
				contador_coringa++;
				cavalo(i-1,j-2,n);
				contador_coringa--;
				tabuleiro[i-1][j-2] = 0;
			}
		}
		if((j+2)<10){
			if(tabuleiro[i-1][j+2] == 0){
				tabuleiro[i-1][j+2] = 1;
				contador_coringa++;
				cavalo(i-1,j+2,n);
				contador_coringa--;
				tabuleiro[i-1][j+2] = 0;
			}
		}
	}
	if((i+1)<n){
		if((j-2)>-1){
			if(tabuleiro[i+1][j-2] == 0){
				tabuleiro[i+1][j-2] = 1;
				contador_coringa++;
				cavalo(i+1,j-2,n);
				contador_coringa--;
				tabuleiro[i+1][j-2] = 0;
			}
		}
		if((j+2)<10){
			if(tabuleiro[i+1][j+2] == 0){
				tabuleiro[i+1][j+2] = 1;
				contador_coringa++;
				cavalo(i+1,j+2,n);
				contador_coringa--;
				tabuleiro[i+1][j+2] = 0;
			}
		}
	}
	if((i+2)<n){
		if((j-1)>-1){
			if(tabuleiro[i+2][j-1] == 0){
				tabuleiro[i+2][j-1] = 1;
				contador_coringa++;
				cavalo(i+2,j-1,n);
				contador_coringa--;
				tabuleiro[i+2][j-1] = 0;
			}
		}
		if((j+1)<10){
			if(tabuleiro[i+2][j+1] == 0){
				tabuleiro[i+2][j+1] = 1;
				contador_coringa++;
				cavalo(i+2,j+1,n);
				contador_coringa--;
				tabuleiro[i+2][j+1] = 0;
			}
		}
	}
	if(contador_coringa > contador){
		contador = contador_coringa;
	}
}

int main(){
	int n, pos_inicial, quantidade, i, j, total, inicio, caso=1;
	scanf("%d", &n);
	while(n!=0){
		contador = 1;
		contador_coringa = 1;
		total = 0;
		tabuleiro.resize(10);
		for(i=0; i<n; i++){
			scanf("%d %d", &pos_inicial, &quantidade);
			total += quantidade;
			tabuleiro[i].resize(10);
			for(j=0; j<pos_inicial; j++){
				tabuleiro[i][j] = 2;
			}
			for(; j<(pos_inicial+quantidade); j++){
				tabuleiro[i][j] = 0;
			}
			for(; j<10; j++){
				tabuleiro[i][j] = 2;
			}
			if(i==0){
				tabuleiro[0][pos_inicial] = 1;
				inicio = pos_inicial;
			}
		}
		cavalo(0,inicio,n);
		/*for(i=0; i<n; i++){
			for(j=0; j<10; j++){
				printf("%d ", tabuleiro[i][j]);
			}
			printf("\n");
		}*/
		if(total-contador==1){
			printf("Case %d, 1 square can not be reached.\n", caso);
		}
		else{
			printf("Case %d, %d squares can not be reached.\n", caso, total-contador);
		}
		for(i=0; i<10; i++){
			tabuleiro[i].clear();
		}
		tabuleiro.clear();
		scanf("%d", &n);
		caso++;
	}
    return 0;
}
