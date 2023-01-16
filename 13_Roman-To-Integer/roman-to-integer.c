#include<stdio.h>
#include<string.h>

int romanToInt(char * s)
{

    int num=0;

    int length=strlen(s);
    for (int i = 0; i < length; i++)
    {
        int flag = 1;

        char roman[]={'I','V','X','L','C','D','M'};
        printf("true %c",roman[5]);

        if (s[i]<s[i+1])
        {
            printf("true %d",i);
            flag = -1;
        }

        switch (s[i])
        {
        case 'I':
            num=num+1*flag;
            break;
        case 'V':
            num=num+5*flag;
            break;
        case 'X':
            num=num+10*flag;
            break;
        case 'L':
            num=num+50*flag;
            break;
        case 'C':
            num=num+100*flag;
            break;
        case 'D':
            num=num+500*flag;
            break;
        case 'M':
            num=num+1000*flag;
            break;
        
        default:
            break;
        }
        
    }
    
    return num;

}

int main()
{
    // printf("%d\n",romanToInt("III"));
    // printf("%d\n",romanToInt("IX"));
    printf("%d\n",romanToInt("IV"));
    // printf("%d\n",romanToInt("MCMXCIV"));
    return 0;
}