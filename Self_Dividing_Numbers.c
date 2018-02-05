bool check_num(int num)
{
    if(num == 0 || num == 10000 || num == 10)
        return false;
    
    if(num > 0 && num < 10)
        return num;
    
    if((num/10 ? num/10:1)%10 == 0) 
       return false;
       
    if((num/100 ? num/100:1)%10 == 0)
        return false;
    
    if((num/1000 ? num/1000:1)%10 == 0)
        return false;
    
    int temp_num = num, temp_div;
    
    while(temp_num)
    {
        temp_div = temp_num % 10;
                    
        if(temp_div == 0)
        {return false;}
              
        if(num % temp_div != 0)
        {return false;}
        
        temp_num = temp_num / 10;    
        
    }
    
    return num;   
    
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    
    //printf("*returnSize = %d\n", *returnSize);
    
    int *temp_ret = malloc((right - left + 1)* sizeof(int)); 
    int count=0;
    
    for(int i = left; i<= right; i++)
    {
        if(check_num(i))
        {
            temp_ret[count] = i;
            count++;
        }
                
    }
    
    
    int *resul = malloc(count * sizeof(int));
    
    *returnSize = count;
        
    for(int j = 0; j < count; j++)
    {
        resul[j] = temp_ret[j];
        
    }
    return resul;
}
