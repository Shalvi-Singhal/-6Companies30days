#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lld                                 long double
#define ll                                  long long
#define vi                                  vector<int>
#define vll                                 vector<ll>
 
 
int main(){
 
     // freopen("i.txt","r",stdin);
     // freopen("o.txt","w",stdout);
    IOS;
 
    ll N;
  cin>>N;
  set<ll> s;
  for(int i=0;i<N;i++){
    ll p;
    cin>>p;
    s.insert(p);
  }
  vll v(s.begin(), s.end());
  
  ll m=v.size()-1;
  ll c=0;
  for(int i=m;i>m-10;i--){
         cout<<v[i]<<" ";
  }
      
}
 
 
 
