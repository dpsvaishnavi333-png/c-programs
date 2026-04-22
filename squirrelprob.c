// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int temperature;
    int play;
    printf("enter 1 for playing and 0 for not playing");
    scanf("%d",&play);
    if(play==1)
    {
        if(temperature>=60&&temperature<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
         }
    }
    else
    {
        if(play==0)
        {
            if(temperature>=100)
            {
                printf("false");
            }
            else
            {
                printf("true");
            }
        }
    }
    return 0;
}