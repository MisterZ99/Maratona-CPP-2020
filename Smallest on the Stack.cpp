#include <bits/stdc++.h> //não usar cin ou cout
using namespace std;
 
int main(){
    long long int n, a, b, i;
	stack<pair<long long int, long long int>> pilha;
	char palavra[5];
	scanf("%lld", &n);
	for(i=0; i<n; i++){
		scanf(" %s", palavra);
		if(palavra[0]=='P' && palavra[1]=='U'){
			scanf("%lld", &a);
			b = a;
			if(pilha.empty()==true){
				pilha.push(make_pair(a,b));
			}
			else{
				if(b>pilha.top().second){
					b = pilha.top().second;
				}
				pilha.push(make_pair(a,b));
			}
		}
		else{
			if(palavra[0]=='P' && palavra[1]=='O'){
				if(pilha.empty()==true){
					printf("EMPTY\n");
				}
				else{
					pilha.pop();
				}
			}
			else{
				if(pilha.empty()==true){
					printf("EMPTY\n");
				}
				else{
					printf("%lld\n", pilha.top().second);
				}
			}
		}
	}
    return 0;
}
