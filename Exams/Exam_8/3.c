#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
    #define ll long long
    ll anc[510][510]={0};
    int main(){
    	ll n, K;
	scanf("%d %d",&n,&K);
    	assert(0 <= K && K <= 1e9);
    	assert(1 <= n && n <= 500);
    	ll a[1000];
    	ll par[1000];
    	for(ll i=1; i<=n; i++){
		scanf("%d",&a[i]);
    		assert(0 <= a[i] && a[i] <= 1e9);
    	}
    	for(ll i=2; i<=n; i++){
    		ll temp;
		scanf("%d",&temp);
    		assert(1 <= temp && temp <= i);
    		par[i] = temp;
    	}
    	for(ll i=2; i<=n; i++){
    		ll x = i;
    		while(x != 1){
    			x = par[x];
    			anc[x][i] = 1;
    		}
    	}
    	ll ans = 0;
    	for(ll i=1; i<=n; i++)
    	for(ll j=1; j<=n; j++)
    	for(ll k=1; k<=n; k++){
    		if(i == j || j == k || i == k)continue;
    		if(anc[i][j] && anc[i][k] && a[i]+a[j]+a[k] >= K){
    			ans++;
    		}	
    	}
	printf("%d\n",ans/2);		
    	return 0;
    }


