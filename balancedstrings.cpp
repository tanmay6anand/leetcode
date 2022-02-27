class Solution {
public:
    int balancedStringSplit(string s) {
        int i=0,count=0,c=0;
        while(s[i]!='\0'){
            if(s[i]-'R'==0){
                count--;
            }
            else if(s[i]-'L'==0){
                count++;
            }
            if(count == 0){
                c++;
            }
            
            i++;
        }
        return c;
    }
};