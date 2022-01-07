// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
         int m=s.size();

    set<string> st;
    vector<vector<string>> ans;
  
    for(int i=1;i<=m;i++){
        string p=s.substr(0,i);
        for(int j=0;j<n;j++){
            string g = contact[j].substr(0,i);
            if(p==g)
            {string d=contact[j];
                st.insert(d);}
        }
        vector <string> v{st.begin(),st.end()};
        
        if(v.empty())
        v.push_back("0");
        
        ans.push_back(v);
        v.clear();
        st.clear();
    }
    return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends
