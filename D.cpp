#include <bits/stdc++.h>
using namespace std;

int main(){
queue<int> a;
stack<int> b;
priority_queue<int> c;
int vetor[3], n, comando, valor, i;
while(scanf("%d", &n)!=EOF){
	vetor[0] = 1;
	vetor[1] = 1;
	vetor[2] = 1;
	for(i=0; i<n; i++){
		scanf("%d %d", &comando, &valor);
		if(comando==1){
			a.push(valor);
			b.push(valor);
			c.push(valor);
		}
		else{
			if(a.empty()==true){
				vetor[0] = 0;
				vetor[1] = 0;
				vetor[2] = 0;
				continue;
			}
			if(a.front()!=valor){
				vetor[0]=0;
			}
			if(b.top()!=valor){
				vetor[1]=0;
			}
			if(c.top()!=valor){
				vetor[2]=0;
			}
			a.pop();
			b.pop();
			c.pop();
		}
	}
	if(vetor[0]+vetor[1]+vetor[2]>1){
		printf("not sure\n");
	}
	else{
		if(vetor[0]+vetor[1]+vetor[2]==0){
			printf("impossible\n");
		}
		else{
			if(vetor[0]==1){
				printf("queue\n");
			}
			else{
				if(vetor[1]==1){
					printf("stack\n");
				}
				else{
					printf("priority queue\n");
				}
			}
		}
	}
	while(a.empty()==false){
		a.pop();
	}
	while(b.empty()==false){
		b.pop();
	}
	while(c.empty()==false){
		c.pop();
	}
}
return 0;
}
