// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
    string decodedString(string& s, int& i) {
        string result;
        while(i < s.length() && s[i] != ']'){
            if(isdigit(s[i])){
                int k = 0;
                while(i < s.length() && isdigit(s[i]))
                    k = k*10 + s[i++] - '0';
                i++;
                string r = decodedString(s, i);
                while(k--)
                    result += r;
                i++;
            } else
                result += s[i++];
        }
        return result;
    }
public:
    string decodedString(string s) {
        int i = 0;
        return decodedString(s, i);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
