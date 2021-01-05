#include <bits/stdc++.h>
using namespace std;
 
int main(){
    deque<long long int> ada;
	long long int q, sinal=0, i, valor;
	string palavra;
	scanf("%lld", &q);
	for(i=0; i<q; i++){
		cin>>palavra;
		if(sinal==0){
			if(palavra=="back"){
				if(ada.empty()==false){
					printf("%lld\n", ada.back());
					ada.pop_back();
				}
				else{
					printf("No job for Ada?\n");
				}
			}
			else{
				if(palavra=="front"){
					if(ada.empty()==false){
						printf("%lld\n", ada.front());
						ada.pop_front();
					}
					else{
						printf("No job for Ada?\n");
					}
				}
				else{
					if(palavra=="reverse"){
						sinal = 1;
					}
					else{
						scanf("%lld", &valor);
						if(palavra=="push_back"){
							ada.push_back(valor);
						}
						else{
							ada.push_front(valor);
						}
					}
				}
			}
		}
		else{
			if(palavra=="front"){
				if(ada.empty()==false){
					printf("%lld\n", ada.back());
					ada.pop_back();
				}
				else{
					printf("No job for Ada?\n");
				}
			}
			else{
				if(palavra=="back"){
					if(ada.empty()==false){
						printf("%lld\n", ada.front());
						ada.pop_front();
					}
					else{
						printf("No job for Ada?\n");
					}
				}
				else{
					if(palavra=="reverse"){
						sinal = 0;
					}
					else{
						scanf("%lld", &valor);
						if(palavra=="toFront"){
							ada.push_back(valor);
						}
						else{
							ada.push_front(valor);
						}
					}
				}
			}
		}
	}
    return 0;
}
