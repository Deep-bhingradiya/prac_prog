int maxProfit(int* prices, int pricesSize) {
    
    int profit = 0;
    int bought = 0;
    int buying_price = 0;
    int i = 0;
    
    //printf("pricesize = %d\n", pricesSize);
    
    //for(i = 0; prices[i+1] != '\0'; i++)
    for(i = 0; i < (pricesSize-1); i++)
    {
        //printf("prices[%d] = %d\n", i, prices[i]);
        
        if(bought)
        {
            //printf("inside bought \n");
            
            if(prices[i] > prices[i+1])
            {
                bought = 0;
                profit += prices[i] - buying_price;
            }
            continue;
            
        }
        else
        {
            //printf("inside else \n");
            
            if(prices[i] < prices[i+1])
            {
                bought = 1;
                buying_price = prices[i];
            }
            continue;
            
        }
        
    }
    
    if(bought)
    {
        //printf("last trans \n");
        profit += (prices[i] - buying_price);
    }
    
    printf("profit = %d\n", profit);
    
    return profit;
    
}
