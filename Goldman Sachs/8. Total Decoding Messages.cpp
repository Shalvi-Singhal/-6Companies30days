// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string s){
		    if(s.size()==0||s[0]=='0')
		    return 0; 
		    else if(s.size()==1)
		    return 1;
		    else{
		    long long mod=1000000007;
		    int n=s.size();
		    int count1=1, count2=1;
		    for(int i=1;i<n;i++){
		        int d=s[i]-'0';
		        int dd=(s[i-1]-'0')*10+d;
		        int count=0;
		        if(d>=1)
		        count=(count+count2%mod)%mod;
		        if(dd>=10&&dd<=26)
		        count=(count+count1%mod)%mod;
		        
		        count1=count2;
		        count2=count;
		    }
		    return count2;
		    }
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
