class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int r=purchaseAmount%10;
        int n=purchaseAmount/10;;
        if(r>=5)
            n=(n+1)*10;
        else
            n=n*10;
        return 100-n;
    }
};