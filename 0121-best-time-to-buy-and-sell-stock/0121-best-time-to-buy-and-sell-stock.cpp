class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2){
            return 0;
        }
        int left =prices[0];
        int right=prices[1];
        int mx=0;
        mx=max(mx,right-left);
        for(int i=2;i<prices.size();i++){
            if(right<left){
                left=right;
            }
            
            right=prices[i];
            mx=max(mx,right-left);
            
        }
        return  mx;
          
            }
};