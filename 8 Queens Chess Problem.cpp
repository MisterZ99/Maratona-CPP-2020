#include <bits/stdc++.h>//Presentation Error
using namespace std;

vector<vector<int>> tabuleiro;
vector<int> solucao;
int x_permanente, y_permanente, sol;

bool diagonal(int i, int j){
    int x=i-1, y=j-1;
    while(x>-1 && y>-1){
        if(tabuleiro[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x=i+1;
    y=j-1;
    while(x<8 && y>-1){
        if(tabuleiro[x][y]==1){
            return false;
        }
        x++;
        y--;
    }
    x=i+1;
    y=j+1;
    while(x<8 && y<8){
        if(tabuleiro[x][y]==1){
            return false;
        }
        x++;
        y++;
    }
    x=i-1;
    y=j+1;
    while(x>-1 && y<8){
        if(tabuleiro[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}

bool vertical(int i, int j){
    int x=i-1, y=j;
    while(x>-1){
        if(tabuleiro[x][y]==1){
            return false;
        }
        x--;
    }
    x=i+1;
    while(x<8){
        if(tabuleiro[x][y]==1){
            return false;
        }
        x++;
    }
    return true;
}

bool horizontal(int i, int j){
    int x=i, y=j-1;
    while(y>-1){
        if(tabuleiro[x][y]==1){
            return false;
        }
        y--;
    }
    y=j+1;
    while(y<8){
        if(tabuleiro[x][y]==1){
            return false;
        }
        y++;
    }
    return true;
}

void combinacoes(int j){
    int x=0, y=j;
    if(y==y_permanente){
        y++;
        if(y==8){
            printf(" %d      ", sol+1);
            int k;
            for(k=0; k<7; k++){
                printf("%d ", solucao[k]+1);
            }
            printf("%d\n", solucao[k]+1);
            sol++;
        }
    }
    if(y<8){
        for(x=0; x<8; x++){
            if(diagonal(x,y) && vertical(x,y) && horizontal(x,y)){
                tabuleiro[x][y]=1;
                solucao[y]=x;
                if(y==7){
                    printf(" %d      ", sol+1);
                    int k;
                    for(k=0; k<7; k++){
                        printf("%d ", solucao[k]+1);
                    }
                    printf("%d\n", solucao[k]+1);
                    sol++;
                }
                combinacoes(y+1);
                tabuleiro[x][y]=0;
            }
        }
    }
}

int main(){
    int T;
    tabuleiro.resize(8);
    for(int i=0; i<8; i++){
        tabuleiro[i].resize(8);
    }
    solucao.resize(8);
    scanf("%d", &T);
    //cin.ignore();
    while(T>0){
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        sol = 0;
        scanf("%d %d", &x_permanente, &y_permanente);
        //cin.ignore();
        x_permanente--;
        y_permanente--;
        solucao[y_permanente]=x_permanente;
        tabuleiro[x_permanente][y_permanente]=1;
        combinacoes(0);
        tabuleiro[x_permanente][y_permanente]=0;
        printf("\n");
        T--;
    }
    return 0;
}
