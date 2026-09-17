class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        string s=word;
        while(word.size()<k){
            int i=0;
            while(i<word.size()){
                s+='a'+(word[i]-'a'+1)%26;
                i++;
            }
            word=s;
        }
        return s[k-1];
         
        
    }
};