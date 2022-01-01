class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1<str2)
            gcdOfStrings(str2, str1);
        for(int k=str2.size();k>=1;k--){
            bool flag=false;
            if(str1.size()%k!=0||str2.size()%k!=0)
                continue;
             
                string s= str2.substr(0,k);
                for(int i=0;i<str1.size();i+=k){
                    if(str1.substr(i,k)!=s){
                        flag=true;
                        break;
                    }
                }
                if(flag)
                    continue;
              
                for(int i=0;i<str2.size();i+=k){
                    if(str2.substr(i,k)!=s){
                        flag=true;
                        break;
                    }
                }
                if(flag)
                    continue;
                return s;
            }
        
        return "";
    }
};
