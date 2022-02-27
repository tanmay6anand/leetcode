class Solution {
public:
    int reverse(int n){
        int x=n,r=0,s=0;
        while(x!=0){
            r=x%10;
            s = s*10 + r ;
            x = x/10;
        }
        return s;
    }
    
    int maximum69Number (int num) {
        int x=num,s=0,c=0,r;
       x = reverse(x);
        while(x!=0){
            r=x%10;
            if(r==6 && c==0){
                r=9;
                c++;
            }
            s=s*10+r;
            x=x/10;
            
        }
        return s;
    }
};