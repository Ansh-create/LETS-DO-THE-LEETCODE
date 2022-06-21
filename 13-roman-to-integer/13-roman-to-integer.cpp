class Solution {
public:
    int romanToInt(string s) {
        int ret= 0;
        for(int i=0; i<s.length(); i++)
        {
            char currC=s[i];
            char nextC=s[i+1];
            
            if(currC=='M')
            {
                ret = ret + 1000;
            }
            else if(nextC=='M' && currC =='C')
            {
                ret = ret +900;
                i++;
            }
            
            else if(currC=='D')
            {
                ret = ret + 500;
            }
            
            else if(nextC=='D' && currC == 'C')
            {
                ret = ret + 400;
                i++;
            }
            
             else if(currC=='C')
            {
                ret = ret + 100;
            }
            
            else if(nextC=='C' && currC == 'X')
            {
                ret = ret + 90;
                i++;
            }
            
            
             else if(currC=='L')
            {
                ret = ret + 50;
            }
            
            else if(nextC=='L' && currC == 'X')
            {
                ret = ret + 40;
                i++;
            }
            
             else if(currC=='X')
            {
                ret = ret + 10;
            }
            
            else if(nextC=='X' && currC == 'I')
            {
                ret = ret + 9;
                i++;
            }
            
             else if(currC=='V')
            {
                ret = ret + 5;
            }
            
            else if(nextC=='V' && currC == 'I')
            {
                ret = ret + 4;
                i++;
            }
                
            else
            {
                ret++;
            }
        }
        return ret;
    }
};