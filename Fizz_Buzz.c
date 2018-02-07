/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

char **ret_val;

char** fizzBuzz(int n, int* returnSize) {
    
    int count = 0;
    
    *returnSize = n;
    
    ret_val = (char **)malloc(n * sizeof(char *));
    
    for(int i = 1; i < n+1; i++)
    {
        if((i%3 == 0) && (i%5 == 0))
        {
            ret_val[count] = "FizzBuzz";
            count++;
                
        }
        else if(i%5 == 0)
        {
            ret_val[count] = "Buzz";
            count++;
        }
        else if(i%3 == 0)
        {
            ret_val[count] = "Fizz";
            count++;
        }
        else
        {
            ret_val[count] = malloc(sizeof(int));
            sprintf(ret_val[count],"%d", i);
            count++;
            
        }
     
    }
    
    return ret_val;
    
}
