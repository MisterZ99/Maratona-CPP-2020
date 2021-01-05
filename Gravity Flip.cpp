#include <bits/stdc++.h>
using namespace std;

int main(){
int n, a, i;
vector<int> colunas;
scanf("%d", &n);
for(i=0; i<n; i++){
	scanf("%d", &a);
	colunas.push_back(a);
}
sort(colunas.begin(), colunas.end());
for(i=0; i<n-1; i++){
	printf("%d ", colunas[i]);
}
printf("%d", colunas[i]);
return 0;
}
