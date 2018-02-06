#include <stdio.h>

char ret_sen[100000];

char *ret_final;

//char ret_sent[1000];


char* reverseWords(char* s) 
{
    
    for(int x = 0; x < 100000; x++)
    {
        ret_sen[x] = ' ';
    }
    
    int length = strlen(s);    
    
    int flag = 0;
    
    ret_final = (char *)malloc(length * sizeof(char));
    
    char temp_word[100];
    int temp_count = 0;
    int ret_count = 0;
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        //printf("start of for loop \n");
        //printf("%c\n", s[i]);
       
        
        if(s[i] != ' ')
        {
            temp_word[temp_count] = s[i];
            temp_count++;
            flag = 1;
        }
        else
        {
            flag = 0;
                      
            for(int j = temp_count-1; j >= 0; j--)
            {
                //printf("%c",temp_word[j]);
           
                ret_sen[ret_count] = temp_word[j];
                ret_count++;
            }
         
            printf(" ");
                       
            ret_sen[ret_count] = ' ';
            ret_count++;
            
            temp_count = 0;
        }
        
    }
 
    //printf(" ");
                       
   
    for(int j = temp_count-1; j >= 0; j--)
    {
        //printf("%d ",j);
        //printf("%c\n",temp_word[j]);
           
        ret_sen[ret_count] = temp_word[j];
        ret_count++;
        //printf("%s\n", ret_sen);
    }
         
    int y;
    for(y = 0; y < length; y++)
    {
        ret_final[y] = ret_sen[y];
    }
    
    ret_final[y] = '\0';
    
    //printf("\nFinal sentence\n");
    //printf("%s\n", ret_sen);
 
    printf("\nRet Final sentence\n");
    printf("%s\n", ret_final);
 
    return ret_final;
    
}
