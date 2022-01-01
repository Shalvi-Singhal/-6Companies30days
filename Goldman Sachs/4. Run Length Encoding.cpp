// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{   
 string s="";
 int c=1,i;   
  for(i=0;i<src.size()-1;i++){
      if(src[i]==src[i+1])
      c++;
      else{
          s=s+src[i]+ to_string(c);
          c=1;
      }
  }
  s= s+src[i]+to_string(c);
  return s;
}     
 
