#include <stdio.h>
#include <string.h>


int romanToInt(char* s) 
{
   

    int temp = 0, j = 0;
    int sum = 0;
    int now = 0;
    int prev = 0;
    
    for(int i = (strlen(s)-1); i >= 0; i--)  
    {
        
        switch(s[i])
        {
            case 'M':
                        temp = 1000;
                        break;
            
            case 'D':
                        temp = 500;
                        break;
                
            case 'C':
                        temp = 100;
                        break;
                
            case 'L':
                        temp = 50;
                        break;
                
            case 'X':
                        temp = 10;
                        break;
            
            case 'V':
                        temp = 5;
                        break;
            
            case 'I':
                        temp = 1;
                        break;
                                                
                
                
        }
        
        now = temp;
        
        if(now < prev)
        {
            sum -= temp;
            prev = now;
            continue;
        }
        

        
        sum += temp;
        //printf("sum = %d\n",sum);
        
        prev = now;
        
    }
    
    printf("Sum = %d \n", sum);
    
    return sum;
}
    
