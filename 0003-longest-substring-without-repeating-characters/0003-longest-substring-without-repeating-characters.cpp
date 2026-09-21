class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int>st;
        int left=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
          
            while(st.find(s[i])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
              maxlen=max(maxlen,i-left+1);
        }
         return maxlen;
    }
   
};