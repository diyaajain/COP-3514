#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int in_order(char *word);

int in_order(char *word)
{
    int p;
    int flag =0;
    int length = strlen(word);
    *word = tolower(*word);
    while(*word != '\0')
    {
        if (*word >= 'a' && *word <= 'z')
        {
            for (p=0; p<length; p++)
            {
                if((word[p]) < (word[p+1]))
                {
                    flag = 0;
                    break;;                    
                }
                else
                {
                    flag = 1;
                }
            }
        }
    }
    return flag;
}

int main(int argc, char *argv[])
{   
    int flag = 0; 
    printf("%d \n", argc); // remove this in terminal
    if (argc >2 || argc == 1)
    {
        printf("Incorrect number of arguments. Usage: ./a.out word \n");
        return 1;
    }
    else{
        char *word = argv[1];
        flag = in_order(word);
        if (flag == 0)
        {
            printf("In order");
        }
        else
        {
            printf("Not in order");
        }
    }
    return 0;
}