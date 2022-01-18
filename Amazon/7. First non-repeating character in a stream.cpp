// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    
    queue<char>q;
    vector<int> v(26,-1);
    string s="";
    for(int i=0;i<A.size();i++){
          
            if(v[A[i]-97]==-1){
              q.push(A[i]);
              v[A[i]-97]++;
              
            }else{
              if(!q.empty() && A[i]==q.front()){
                q.pop();
              }
               v[A[i]-97]++;
            
            while(!q.empty() && v[q.front()-97]>0){
             q.pop();   
            }
            }
             if(q.empty()){
               s+="#";
             }else{
               s+=q.front();
             }
            
       }
     return s;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
