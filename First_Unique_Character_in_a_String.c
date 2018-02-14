int firstUniqChar(char* s) 
{
    
    int i,j;
    int chars[26];

    for(i = 0; i < 26; i++)
    {
        chars[i] = 0;
    }
    
    
    for(i = 0; s[i] != '\0'; i++)
    {
        chars[(s[i] - 'a')]++;
    }
    
    for(i = 0; s[i] != '\0'; i++)
    {
        if(chars[(s[i]-'a')] == 1)
        {
            return i;
        }
            
    }
       
    
    return -1;
    
}
