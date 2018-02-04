int hammingDistance(int x, int y) {
    
    int result = x ^ y;
    int count=0;
    
    //printf("x = %d\n", x);
    //printf("y = %d\n", y);
    
    //printf("result = %d \n", result);
    
    while(result)
    {
        if(result & 0x1)
        {count++;}
        
        result = result >> 1;
    }
    
    printf("%d", count);
    
    return count;
    
}
