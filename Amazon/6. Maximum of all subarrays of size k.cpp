// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
         priority_queue<pair<int,int>> pq;
        vector<int> ans;
        int l=0;
        int r=0;
        
        while(r!=n){
           if(r-l+1<k)
            {pq.push({a[r],r});
            r++;}
            else{
                pq.push({a[r],r});
                ans.push_back(pq.top().first);
                while(!pq.empty()){
                if(pq.top().second<=l)
                pq.pop();
                else
                break;
                }
            l++;r++;
            }
            
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
