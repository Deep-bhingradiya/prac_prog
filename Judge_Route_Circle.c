bool judgeCircle(char* moves) {
    
    int hori = 0, verti = 0;
    
    for(int i = 0; moves[i] != '\0'; i++)
    {
        if(moves[i] == 'U')
        {verti++;}
        
        if(moves[i] == 'D')
        {verti--;}
        
        if(moves[i] == 'R')
        {hori++;}
        
        if(moves[i] == 'L')
        {hori--;}
        
    }
    
    if(hori || verti)
    {
        return false;  
    }
    
    return true;
    
}
