int majorityElement(int* nums, int numsSize) {
    
    int max_num = nums[0];
    int counts = 1;
    
    for(int i = 1; i < numsSize; i++)
    {
        if(counts == 0)
        {
            counts++;
            max_num = nums[i];
        }
        else if(max_num == nums[i])
        {
            counts++;
        }
        else 
        {
            counts--;
        }

    }
    
    printf("majority num = %d\n",max_num);
    
    return max_num;
         
}
