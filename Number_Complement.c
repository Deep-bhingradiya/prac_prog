int findComplement(int num) {
    
    int mask = 0;
    int count = 0;
    int temp_num = num;
    int result;
    
    if(num == 0)
        return 1;
    
    while(temp_num)
    {
        mask = mask | (1 << count); 
        
        count++;
        temp_num = temp_num >> 1;
    }
    
    printf("mask = %d\n", mask);

    result = num ^ mask;
    
    printf("result = %d \n", result);
    
    return result;
    
}
