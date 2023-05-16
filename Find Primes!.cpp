#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1e6
vector<int>sei(N+1,1);
void Seive(){
	sei[0]=sei[1]=0;
	for(int i=2;i*i<=N;i++){
		if(sei[i]==1){
			for(int j=i*i;j<=N;j+=i){
				sei[j]=0;
			}
		}
	}
	for(int i=1;i<=N;i++){
		sei[i]=sei[i-1]+sei[i];
	}
}

int main() {
	ll num;
	cin >> num;    
	Seive();
	while(num--){
		int a,b,c=0;
		cin>>a>>b;
		
		cout<<(sei[b]-sei[a-1])<<"\n";
	}
}
