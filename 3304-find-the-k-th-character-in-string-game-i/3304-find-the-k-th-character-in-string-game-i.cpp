class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        string s=word;
        while(word.size()<k){
            int i=0;
            while(i<word.size()){
                s+=word[i]+1;
                i++;
            }
            word=s;
        }
        return s[k-1];
         
        
    }
};