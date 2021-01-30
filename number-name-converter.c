#include<stdio.h>
#include<math.h>
#include<string.h>

void Pstrcpy(char *s1, const char s[100])
{
    int i = 0;
    while(s[i] != '\0')
    {
        s1[i] = s[i];
        i++;
    }
    s1[i] = '\0';
}

void Pstrcat(char *s1, const char s[100])
{
    int i = strlen(s1);
    int len = strlen(s1);
    while(s[i - len] != '\0')
    {
        s1[i] = s[i - len];
        i++;
    }
    s1[i] = '\0';
}

int power(int b)
{
    if(b == 0)
        return 1;
    else if(b == 1)
        return 10;
    else if(b == 2)
        return 100;
}

void main()
{
    int num, temp = 0, place = 0, mcheck = 0, tcheck = 0, ocheck = 0;
    char ones[400] = {"Zero"}, thds[400] = {"Zero"}, mil[400] = {"Zero"};
    printf("Enter the number\n", num);
    scanf("%d", &num);
    //printf("h\n");
    if((num/100000000 == 0) && (num/1000000 != 0))                       
    {
        mil[0] = '\0';
        mcheck = 1;
    }
    if(((num/100000)%10 == 0) && ((num/1000)%100 != 0))
    {
        thds[0] = '\0';
        tcheck = 1;
    }
    if(((num/100)%10 == 0) && ((num/10)%10 != 0))
    {
        ones[0] = '\0';
        ocheck = 1;
    }
    while(num != 0)
    {
        for(int i = 0; i<3; i++)
        {
            temp += (num%10)*power(i);
            num /= 10;
           // printf("h\n");
        }
        if(place == 0)                                             //ones
        {
            switch (temp/100)
            {
            case 1: Pstrcpy(ones, "One Hundred");
                    break;
            case 2: Pstrcpy(ones, "Two Hundred");
                    break;
            case 3: Pstrcpy(ones, "Three Hundred");
                    break;
            case 4: Pstrcpy(ones, "Four Hundred");
                    break;
            case 5: Pstrcpy(ones, "Five Hundred");
                    break;
            case 6: Pstrcpy(ones, "Six Hundred");
                    break;
            case 7: Pstrcpy(ones, "Seven Hundred");
                    break;
            case 8: Pstrcpy(ones, "Eight Hundred");
                    break;
            case 9: Pstrcpy(ones, "Nine Hundred");
                    break;
            default: break;
            }
            switch ((temp/10)%10)
            {
                case 1: 
                        {
                            switch (temp%10)
                            {
                                case 0: Pstrcat(ones, " Ten");
                                        break;
                                case 1: Pstrcat(ones, " Eleven");
                                        break;
                                case 2: Pstrcat(ones, " Twelve");
                                        break;
                                case 3: Pstrcat(ones, " Thirteen");
                                        break;
                                case 4: Pstrcat(ones, " Fourteen");
                                        break;
                                case 5: Pstrcat(ones, " Fifteen");
                                        break;
                                case 6: Pstrcat(ones, " Sixteen");
                                        break;
                                case 7: Pstrcat(ones, " Seventeen");
                                        break;
                                case 8: Pstrcat(ones, " Eighteen");
                                        break;
                                case 9: Pstrcat(ones, " Nineteen");
                                        break;
                                default: break;
                            }
                        }
                        break;
                case 2: Pstrcat(ones, " Twenty");
                        break;
                case 3: Pstrcat(ones, " Thirty");
                        break;
                case 4: Pstrcat(ones, " Forty");
                        break;
                case 5: Pstrcat(ones, " Fifty");
                        break;
                case 6: Pstrcat(ones, " Sixty");
                        break;
                case 7: Pstrcat(ones, " Seventy");
                        break;
                case 8: Pstrcat(ones, " Eighty");
                        break;
                case 9: Pstrcat(ones, " Ninety");
                        break;
                default: break;
            }
            if((temp/10)%10 != 1)
            {
                switch (temp%10)
                {
                    case 0: 
                            break;
                    case 1: Pstrcat(ones, " One");
                            break;
                    case 2: Pstrcat(ones, " Two");
                            break;
                    case 3: Pstrcat(ones, " Three");
                            break;
                    case 4: Pstrcat(ones, " Four");
                            break;
                    case 5: Pstrcat(ones, " Five");
                            break;
                    case 6: Pstrcat(ones, " Six");
                            break;
                    case 7: Pstrcat(ones, " Seven");
                            break;
                    case 8: Pstrcat(ones, " Eight");
                            break;
                    case 9: Pstrcat(ones, " Nine");
                            break;
                    default: break;
                }
            }
            place = 1; 
            //num = 0;                                                    //!!!!!!!!!!!!!!!!!!!!!-debugging-!!!!!!!!!!!!!!!!!!!!!! 
            temp = 0;  
        }
        else if(place == 1)                                             //thousands
        {
            switch (temp/100)
            {
            case 1: Pstrcpy(thds, "One Hundred");
                    break;
            case 2: Pstrcpy(thds, "Two Hundred");
                    break;
            case 3: Pstrcpy(thds, "Three Hundred");
                    break;
            case 4: Pstrcpy(thds, "Four Hundred");
                    break;
            case 5: Pstrcpy(thds, "Five Hundred");
                    break;
            case 6: Pstrcpy(thds, "Six Hundred");
                    break;
            case 7: Pstrcpy(thds, "Seven Hundred");
                    break;
            case 8: Pstrcpy(thds, "Eight Hundred");
                    break;
            case 9: Pstrcpy(thds, "Nine Hundred");
                    break;
            default: break;
            }
            switch ((temp/10)%10)
            {
                case 1: 
                        {
                            switch (temp%10)
                            {
                                case 0: Pstrcat(thds, " Ten");
                                        break;
                                case 1: Pstrcat(thds, " Eleven");
                                        break;
                                case 2: Pstrcat(thds, " Twelve");
                                        break;
                                case 3: Pstrcat(thds, " Thirteen");
                                        break;
                                case 4: Pstrcat(thds, " Fourteen");
                                        break;
                                case 5: Pstrcat(thds, " Fifteen");
                                        break;
                                case 6: Pstrcat(thds, " Sixteen");
                                        break;
                                case 7: Pstrcat(thds, " Seventeen");
                                        break;
                                case 8: Pstrcat(thds, " Eighteen");
                                        break;
                                case 9: Pstrcat(thds, " Nineteen");
                                        break;
                                default: break;
                            }
                        }
                        break;
                case 2: Pstrcat(thds, " Twenty");
                        break;
                case 3: Pstrcat(thds, " Thirty");
                        break;
                case 4: Pstrcat(thds, " Forty");
                        break;
                case 5: Pstrcat(thds, " Fifty");
                        break;
                case 6: Pstrcat(thds, " Sixty");
                        break;
                case 7: Pstrcat(thds, " Seventy");
                        break;
                case 8: Pstrcat(thds, " Eighty");
                        break;
                case 9: Pstrcat(thds, " Ninety");
                        break;
                default: break;
            }
            if((temp/10)%10 != 1)
            {
                switch (temp%10)
                {
                    case 0: 
                            break;
                    case 1: Pstrcat(thds, " One");
                            break;
                    case 2: Pstrcat(thds, " Two");
                            break;
                    case 3: Pstrcat(thds, " Three");
                            break;
                    case 4: Pstrcat(thds, " Four");
                            break;
                    case 5: Pstrcat(thds, " Five");
                            break;
                    case 6: Pstrcat(thds, " Six");
                            break;
                    case 7: Pstrcat(thds, " Seven");
                            break;
                    case 8: Pstrcat(thds, " Eight");
                            break;
                    case 9: Pstrcat(thds, " Nine");
                            break;
                    default: break;
                }
            }
            place = 2;   
            temp = 0;     
        }
        else if(place == 2)                                             //millions
        {
            switch (temp/100)
            {
            case 1: Pstrcpy(mil, "One Hundred");
                    break;
            case 2: Pstrcpy(mil, "Two Hundred");
                    break;
            case 3: Pstrcpy(mil, "Three Hundred");
                    break;
            case 4: Pstrcpy(mil, "Four Hundred");
                    break;
            case 5: Pstrcpy(mil, "Five Hundred");
                    break;
            case 6: Pstrcpy(mil, "Six Hundred");
                    break;
            case 7: Pstrcpy(mil, "Seven Hundred");
                    break;
            case 8: Pstrcpy(mil, "Eight Hundred");
                    break;
            case 9: Pstrcpy(mil, "Nine Hundred");
                    break;
            default: break;
            }
            switch ((temp/10)%10)
            {
                case 1: 
                        {
                            switch (temp%10)
                            {
                                case 0: Pstrcat(mil, " Ten");
                                        break;
                                case 1: Pstrcat(mil, " Eleven");
                                        break;
                                case 2: Pstrcat(mil, " Twelve");
                                        break;
                                case 3: Pstrcat(mil, " Thirteen");
                                        break;
                                case 4: Pstrcat(mil, " Fourteen");
                                        break;
                                case 5: Pstrcat(mil, " Fifteen");
                                        break;
                                case 6: Pstrcat(mil, " Sixteen");
                                        break;
                                case 7: Pstrcat(mil, " Seventeen");
                                        break;
                                case 8: Pstrcat(mil, " Eighteen");
                                        break;
                                case 9: Pstrcat(mil, " Nineteen");
                                        break;
                                default: break;
                            }
                        }
                        break;
                case 2: Pstrcat(mil, " Twenty");
                        break;
                case 3: Pstrcat(mil, " Thirty");
                        break;
                case 4: Pstrcat(mil, " Forty");
                        break;
                case 5: Pstrcat(mil, " Fifty");
                        break;
                case 6: Pstrcat(mil, " Sixty");
                        break;
                case 7: Pstrcat(mil, " Seventy");
                        break;
                case 8: Pstrcat(mil, " Eighty");
                        break;
                case 9: Pstrcat(mil, " Ninety");
                        break;
                default: break;
            }
            if((temp/10)%10 != 1)
            {
                switch (temp%10)
                {
                    case 0: 
                            break;
                    case 1: Pstrcat(mil, " One");
                            break;
                    case 2: Pstrcat(mil, " Two");
                            break;
                    case 3: Pstrcat(mil, " Three");
                            break;
                    case 4: Pstrcat(mil, " Four");
                            break;
                    case 5: Pstrcat(mil, " Five");
                            break;
                    case 6: Pstrcat(mil, " Six");
                            break;
                    case 7: Pstrcat(mil, " Seven");
                            break;
                    case 8: Pstrcat(mil, " Eight");
                            break;
                    case 9: Pstrcat(mil, " Nine");
                            break;
                    default: break;
                }
            }
            num = 0;
            temp = 0;
        }
        //printf("h\n");
    }
    printf("%s Millions %s Thousands %s", mil, thds, ones);
}