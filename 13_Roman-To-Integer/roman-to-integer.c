#include<stdio.h>
#include<string.h>

int roman_value(char val)
{
     switch (val)
        {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        
        default:
            break;
        }
    
}

int romanToInt(char *s)
{

    int num=0;

    int length=strlen(s);
    for (int i = 0; i < length; i++)
    {
        int flag = 1;

    
        if (roman_value(s[i])<roman_value(s[i+1]))
        {
            flag = -1;
        }
        num = num + roman_value(s[i]) *flag;
                
    }
    return num;

}

int main()
{
    printf("%d\n",romanToInt("III"));
    printf("%d\n",romanToInt("LVIII"));
    printf("%d\n",romanToInt("MCMXCIV"));
    return 0;
}