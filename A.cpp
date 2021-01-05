#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matriz;

bool solucao_2(int n, int i, int j){
	int teste=1, a, limite=n*n, b, c, sinal;
	if(j==limite){
		j=0;
		i++;
	}
	if(i==limite){
		return true;
	}
	if(matriz[i][j]==0){
		while(teste<5){
			sinal=1;
			for(a=0; a<limite; a++){
				if(matriz[i][a]==teste || matriz[a][j]==teste){
					teste++;
					a=-1;
				}
			}
			if(n==2 && teste<5){
				if((i>=0 && i<2) && (j>=0 && j<2)){
					for(b=0; b<2; b++){
						for(c=0; c<2; c++){
							if(matriz[b][c]==teste){
								b=4;
								c=4;
								teste++;
								sinal=0;
							}
						}
					}
				}
				else{
					if((i>=0 && i<2) && (j>=2 && j<4)){
						for(b=0; b<2; b++){
							for(c=2; c<4; c++){
								if(matriz[b][c]==teste){
									b=4;
									c=4;
									teste++;
									sinal=0;
								}
							}
						}
					}
					else{
						if((i>=2 && i<4) && (j>=0 && j<2)){
							for(b=2; b<4; b++){
								for(c=0; c<2; c++){
									if(matriz[b][c]==teste){
										b=4;
										c=4;
										teste++;
										sinal=0;
									}
								}
							}
						}
						else{
							if((i>=2 && i<4) && (j>=2 && j<4)){
								for(b=2; b<4; b++){
									for(c=2; c<4; c++){
										if(matriz[b][c]==teste){
											b=4;
											c=4;
											teste++;
											sinal=0;
										}
									}
								}
							}
						}
					}
				}
			}
			if(teste<5 && sinal==1){
				matriz[i][j]=teste;
				if(solucao_2(n,i,j+1)==false){
					matriz[i][j]=0;
					teste++;
				}
				else{
					return true;
				}
			}
		}
		return false;
	}
	else{
		for(a=0; a<limite; a++){
			if((matriz[i][a]==matriz[i][j] || matriz[a][j]==matriz[i][j]) && (a!=i && a!=j)){
				return false;
			}
		}
		return solucao_2(n, i, j+1);
	}
}

bool solucao_3(int n, int i, int j){
	int teste=1, a, limite=n*n, b, c, sinal;
	if(j==limite){
		j=0;
		i++;
	}
	if(i==limite){
		return true;
	}
	if(matriz[i][j]==0){
		while(teste<10){
			sinal=1;
			for(a=0; a<limite; a++){
				if(matriz[i][a]==teste || matriz[a][j]==teste){
					teste++;
					a=-1;
				}
			}
				if(n==3 && teste<10){
					if((i>=0 && i<3) && (j>=0 && j<3)){
						for(b=0; b<3; b++){
							for(c=0; c<3; c++){
								if(matriz[b][c]==teste){
									b=9;
									c=9;
									teste++;
									sinal=0;
								}
							}
						}
					}
					else{
						if((i>=0 && i<3) && (j>=3 && j<6)){
							for(b=0; b<3; b++){
								for(c=3; c<6; c++){
									if(matriz[b][c]==teste){
										b=9;
										c=9;
										teste++;
										sinal=0;
									}
								}
							}
						}
						else{
							if((i>=0 && i<3) && (j>=6 && j<9)){
								for(b=0; b<3; b++){
									for(c=6; c<9; c++){
										if(matriz[b][c]==teste){
											b=9;
											c=9;
											teste++;
											sinal=0;
										}
									}
								}
							}
							else{
								if((i>=3 && i<6) && (j>=0 && j<3)){
									for(b=3; b<6; b++){
										for(c=0; c<3; c++){
											if(matriz[b][c]==teste){
												b=9;
												c=9;
												teste++;
												sinal=0;
											}
										}
									}
								}
								else{
									if((i>=3 && i<6) && (j>=3 && j<6)){
										for(b=3; b<6; b++){
											for(c=3; c<6; c++){
												if(matriz[b][c]==teste){
													b=9;
													c=9;
													teste++;
													sinal=0;
												}
											}
										}
									}
									else{
										if((i>=3 && i<6) && (j>=6 && j<9)){
											for(b=3; b<6; b++){
												for(c=6; c<9; c++){
													if(matriz[b][c]==teste){
														b=9;
														c=9;
														teste++;
														sinal=0;
													}
												}
											}
										}
										else{
											if((i>=6 && i<9) && (j>=0 && j<3)){
												for(b=6; b<9; b++){
													for(c=0; c<3; c++){
														if(matriz[b][c]==teste){
															b=9;
															c=9;
															teste++;
															sinal=0;
														}
													}
												}
											}
											else{
												if((i>=6 && i<9) && (j>=3 && j<6)){
													for(b=6; b<9; b++){
														for(c=3; c<6; c++){
															if(matriz[b][c]==teste){
																b=9;
																c=9;
																teste++;
																sinal=0;
															}
														}
													}
												}
												else{
													if((i>=6 && i<9) && (j>=6 && j<9)){
														for(b=6; b<9; b++){
															for(c=6; c<9; c++){
																if(matriz[b][c]==teste){
																	b=9;
																	c=9;
																	teste++;
																	sinal=0;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			if(teste<10 && sinal==1){
				matriz[i][j]=teste;
				if(solucao_3(n,i,j+1)==false){
					matriz[i][j]=0;
					teste++;
				}
				else{
					return true;
				}
			}
		}
		return false;
	}
	else{
		for(a=0; a<limite; a++){
			if((matriz[i][a]==matriz[i][j] || matriz[a][j]==matriz[i][j]) && (a!=i && a!=j)){
				return false;
			}
		}
		return solucao_3(n, i, j+1);
	}
}

int main(){
	int n, i, j;
	bool resposta;
	while(scanf("%d", &n)!=EOF){
		if(n==1){
			scanf("%d", &n);
			printf("1\n");
		}
		else{
			if(n==2){
				matriz.resize(4);
				for(i=0; i<4; i++){
					matriz[i].resize(4);
				}
				for(i=0; i<4; i++){
					for(j=0; j<4; j++){
						scanf("%d", &matriz[i][j]);
					}
				}
				resposta = solucao_2(n, 0, 0);
			}
			else{
				matriz.resize(9);
				for(i=0; i<9; i++){
					matriz[i].resize(9);
				}
				for(i=0; i<9; i++){
					for(j=0; j<9; j++){
						scanf("%d", &matriz[i][j]);
					}
				}
				resposta = solucao_3(n, 0, 0);
			}
			if(resposta==true){
				for(i=0; i<n*n; i++){
					for(j=0; j<n*n; j++){
						printf("%d", matriz[i][j]);
						if(j<n*n-1){
							printf(" ");
						}
					}
					printf("\n");
				}
			}
			else{
				printf("NO SOLUTION\n");
			}
			for(i=0; i<n*n; i++){
				for(j=0; j<n*n; j++){
					matriz[j].clear();
				}
			}
			matriz.clear();
		}
		printf("\n");
	}
    return 0;
}
