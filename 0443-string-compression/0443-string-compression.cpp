class Solution {
public:
    int compress(vector<char>& c) {
        if(c.size()<=1){
            return c.size();
        }
       
        int curr=1;
        char ch=c[0];
        string s;
        for(int i=1;i<c.size();i++){
           if(c[i]==ch){
            curr++;
           }
           else{
            s+=ch;
            ch=c[i];
            if(curr>1&&curr<10){
                s+=to_string(curr);
            }
            else if(curr>=10){
                string temp=to_string(curr);
                for(char t:temp){
                    s+=t;
                }
            }
           
           curr=1;
           }
        }
        s += ch;

if(curr > 1){
    string temp = to_string(curr);

    for(char t : temp){
        s += t;
    }
}
        int i=0;
        for(char temp:s){
            c[i]=temp;
            i++;
        }
        return s.size();
    }
};