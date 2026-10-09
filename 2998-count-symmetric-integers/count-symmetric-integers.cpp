class Solution {
public:
    int countSymmetricIntegers(int low,int high){
        int cnt=0;
        for(int i=low;i<=high;i++){
            if(i>=10&&i<=99){
                if(i/10==i%10) cnt++;
            }else if(i>=1000&&i<=9999){
                int a=i/1000,b=(i/100)%10,c=(i/10)%10,d=i%10;
                if(a+b==c+d) cnt++;
            }
        }
        return cnt;
    }
};
