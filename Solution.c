

int romanToInt(char * s){
    char c = *s;
    int i = 0;
    int result = 0;
    char prev_c;
    switch(c)
        {
            case 'I':
                result++;
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                result += 10;
                break;
            case 'L':
                result += 50;
                break;
            case 'C':
                result += 100;
                break;
            case 'D':
                result += 500;
                break;
            case 'M':
                result += 1000;
                break;
                
        }
    prev_c = c;
    
    while(c != NULL)
    {        
        i++;
        
        c = *(s + i);
        switch(c)
        {
            case 'I':
                result++;
                break;
            case 'V':
                if(prev_c == 'I')
                    result += 3;
                else
                    result += 5;
                break;
            case 'X':
                if(prev_c == 'I')
                    result += 8;
                else
                    result += 10;
                break;
            case 'L':
                if(prev_c == 'X')
                    result += 30;
                else
                    result += 50;
                break;
            case 'C':
                if(prev_c == 'X')
                    result += 80;
                else
                    result += 100;
                break;
            case 'D':
                if(prev_c == 'C')
                    result += 300;
                else
                    result += 500;
                break;
            case 'M':
                if(prev_c == 'C')
                    result += 800;
                else
                    result += 1000;
                break;
                
        }
        prev_c = c;
        
    }
    return result;
}