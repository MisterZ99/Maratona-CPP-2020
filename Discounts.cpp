#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int i, n, m, a, q, soma, tamanho;
	vector<long long int> chocolates, cupons;
	scanf("%lld", &n);
	soma = 0;
	for(i=0; i<n; i++){
		scanf("%lld", &a);
		chocolates.push_back(a);
		soma += a;
	}
	scanf("%lld", &m);
	for(i=0; i<m; i++){
		scanf("%lld", &q);
		cupons.push_back(q);
	}
	sort(chocolates.begin(), chocolates.end());
	tamanho = n;
	for(i=0; i<m; i++){
		printf("%lld\n", soma - chocolates[tamanho-cupons[i]]);
	}
    return 0;
}
