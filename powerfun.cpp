class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.00000;
        
        if(n == 0)
        {
            res = 1;
        }
        else if(n == 1)
        {
            res = x;
        }
        else if(n > 1)
        {
            for(int i=1;i<=n;i++)
            {
                res = res*x;
            }
        }
        else if(n<0)
        {
            double n1=-n;
            x = 1/x;
            
            res = myPow(x,n1);
        }
        return res;
    }
};
