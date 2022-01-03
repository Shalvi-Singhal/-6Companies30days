class Solution {
public:
    int minSubArrayLen(int tg, vector<int>& a) {
        int ans=INT_MAX;
        int j=0;
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            while(sum>=tg){
                ans=min(i-j+1, ans);
                sum-=a[j++];
            }
        }
        if(ans!=INT_MAX)return ans;
        else
            return 0;
    }
};
