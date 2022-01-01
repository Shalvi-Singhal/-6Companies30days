#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
 
     // freopen("i.txt","r",stdin);
     // freopen("o.txt","w",stdout);
    IOS;
         int N;
         cin>>N;
         ll sum=0;
         for(int i=1;i<=N;i++){
            sum+=i*i;
         }
         cout<<sum<<endl;     
}
 
 
 
