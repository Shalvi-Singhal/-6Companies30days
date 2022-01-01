vector<int> Solution::repeatedNumber(const vector<int> &A) {
      unordered_set<int> seen;
      vector<int> v;
      
        for(auto &it: A){
            if(seen.count(it))
                {v[0]= it;}
            seen.insert(it);
        }
        for(int i=0;i<seen.size();i++  )
        {
               if(seen.find(i)!=seen.end())
                v[1]=i;
        }
        return v;
}
