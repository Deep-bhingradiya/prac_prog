bool isAnagram(char* s, char* t) 
{
    
    int chars[26];
    int i;
    
    
    for(i = 0; i < 26; i++)
    {
        chars[i] = 0;
    }
    
    for(i = 0; s[i] != '\0'; i++)
    {
        chars[(s[i] - 'a')]++;
    }
    
    for(i = 0; t[i] != '\0'; i++)
    {
        chars[(t[i] - 'a')]--;
    }
        
    
    for (i = 0 ; i < 26 ; i++) 
    {
        if (chars[i] != 0) 
        {
            return false;
        }
    }
    return true;
}
    
