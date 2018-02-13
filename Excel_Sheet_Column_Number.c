#include <stdio.h>
#include <string.h>

int titleToNumber(char* s) {
    
    int sum = 0;
    int temp = 0;
    int j = 0;
    
    //printf("string length = %d\n", strlen(s));
    
    //for(int i = 0; s[i] != '\0'; i++)
    for(int i = (strlen(s)-1); i>=0; i--)  
    {
        //printf("temp = %d\n",temp);
        
        temp = s[i] - 'A';
        //printf("temp = %d\n",temp);
        
        temp = temp + 1;
        //printf("temp = %d\n",temp);
        
        temp = temp * pow(26, j);
        j++;
        //printf("temp = %d\n",temp);
        
        sum += temp;
        //printf("sum = %d\n",sum);
        
    }
    
    printf("Sum = %d \n", sum);
    
    return sum;
}
