#include <bits/stdc++.h>
using namespace std;

int main(){
float l, r, x, y, k, a, b, parametro, i;
scanf("%f %f %f %f %f", &l, &r, &x, &y, &k);
if(x*k>r || y*k<l){
	printf("NO");
	return 0;
}
else{
	a=l;
	b=x;
	while(a<=r){
		i=k*b;
		while(i<=a){
			if(i==a){
				printf("YES");
				return 0;
			}
			b++;
			i=k*b;
		}
		a++;
		b=x;
	}
}
printf("NO");
return 0;
}
