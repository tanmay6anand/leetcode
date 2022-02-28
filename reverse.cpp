class Solution {
public:
    int reverse(int x) {
        long int n=x,s=0,r,i=0;
        
        
        if (n<0){
            n *= -1;
            
        }
      
        while(n>0){
            r = n%10;
            s = s*10 +r;
            n=n/10;
            i++;
        }
        if(x<0){
            s *= -1;
        }
      
        if((s<=-2147483648) or (s>=2147483647)){
            return 0;
        }
        return s;
    }
};