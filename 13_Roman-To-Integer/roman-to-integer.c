#include<stdio.h>
#include<string.h>


//took a charecter which is pased from another function and return its equivalent charecter value
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

//main function to change roman value to its equivalent number
int romanToInt(char *s)
{

    //assume that at first equivalent roman value is 0
    int num=0;

    //check the length of input string using strlen() function which is avialable in string.h header file
    int length=strlen(s);
    for (int i = 0; i < length; i++)
    {   
        //here flag is used to wheather we should nedd to add or subtract the number according to condition
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
    //pass the input string to romanToInt() function to get its roman equivalent number
    printf("%d\n",romanToInt("III"));
    printf("%d\n",romanToInt("LVIII"));
    printf("%d\n",romanToInt("MCMXCIV"));
    return 0;
}  