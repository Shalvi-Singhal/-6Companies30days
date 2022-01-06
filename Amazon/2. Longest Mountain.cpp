class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n=a.size();
        int ans=0;
        int i=1;
        int p,q;
        
        while(i<n)
       {    p=0;q=0;            
            while(i<n && a[i-1]==a[i])  
              i++;                            
            while(i<n && a[i-1]<a[i])    
            {  p++;i++;
                
            }
                    
            
           while(i<n && a[i-1]>a[i])    
           {
               q++;
               i++;    
           } 
          if(p && q)      
           { ans=max(ans,p+q+1);
           }
        
        }
        
        return ans;
    }
};
