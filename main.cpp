#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>

using namespace std;
int main(){
	int N,M,P,i,j,k;
	char nomes[50][50];
	char nomes2[50][50];
	float valores[50],quant[50],x;
	cin>>N;
	for(i=0;i<N;i++){
		x=0;

 	cin>>M;
		for(j=0;j<M;j++){
			cin>>nomes[j];
			cin>>valores[j];
		}
		cin>>P;
		for(j=0;j<P;j++){
			cin>>nomes2[j];
			cin>>quant[j];
		}
		for(j=0;j<P;j++){
			for(k=0;k<M;k++){
				if(strcmp(nomes[k],nomes2[j])==0){
				x+=valores[k]*quant[j];
				}
			}
		}

		cout<<"R$ "<<fixed<<setprecision(2)<<x<<endl;
		
	}
	system("pause");
}

