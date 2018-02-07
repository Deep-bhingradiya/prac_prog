void moveZeroes(int* nums, int numsSize) 
{
    
    int temp = 0;
    
    for(int i = 0; i < numsSize-1; i++)
    {
        if(nums[i] == 0)
        {
            temp = i+1;
            
            while(nums[temp] == 0)
            {
                temp++;
                if(temp == numsSize)
                {return 0;}
            }
            
                        /*
            nums[i] = nums[i] + nums[temp];
            nums[temp] = nums[i] - nums[temp];
            nums[i] = nums[i] - nums[temp];
                     */
            

            nums[i] = nums[i] ^ nums[temp];
            nums[temp] = nums[i] ^ nums[temp];
            nums[i] = nums[i] ^ nums[temp];
   
        }
    }
      /*
    for(int i = 0; i < numsSize; i++)
    {
        printf("%d\n",nums[i]);
    }
         */
    //return nums;
}
