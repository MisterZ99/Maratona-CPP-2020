#include <bits/stdc++.h>//ponto flutuante FDP
using namespace std;

const float e = 2.7182;

int main(){
    float p,q,r,s,t,u;
    float x;
    while(scanf("%f %f %f %f %f %f", &p, &q, &r, &s, &t, &u)!=EOF){
        x = 0.0000;
        while(x<=1.0){
            if(p*(pow(e,-x)) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u == (float)0.0000){
                printf("%0.4f\n", x);
            }
            else{
                x += 0.7071;
                printf("%f\n", p*(pow(e,-x)) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u);
                break;
            }
        }
        if(x>1.0){
            printf("No solution\n");
        }
    }
    return 0;
}