#include <bits/stdc++.h>
using namespace std;

int main(){
int n, l, a, i;
float media, coringa;
vector<int> lanternas;
scanf("%d %d", &n, &l);
for(i=0; i<n; i++){
	scanf("%d", &a);
	lanternas.push_back(a);
}
sort(lanternas.begin(), lanternas.end());
media=0.0;
coringa=media;
if(lanternas[0]!=0){
	media=lanternas[0];
}
for(i=0; i<(n-1); i++){
	coringa=(float)(lanternas[i+1]-lanternas[i])/2;
	if(coringa>media){
		media=coringa;
	}
}
if(lanternas[n-1]!=l){
	coringa=l-lanternas[n-1];
	if(coringa>media){
		media=coringa;
	}
}
printf("%f", media);
return 0;
}
