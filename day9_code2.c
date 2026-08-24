#include<stdio.h>
int main()
{
    int percentage;

    printf("Enter your percentage: ");
    scanf("%d",&percentage);

    if(percentage>=90 && percentage<=100)
    {
        printf("Your grade is A\n");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("Your grade is B\n");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("Your grade is C\n");
    }
    else if(percentage>=60 && percentage<70)
    {
        printf("Your grade is D\n");
    }
    else if(percentage<60 && percentage>=0)
    {
        printf("Your grade is F\n");
    }
    else
    {
        printf("Invalid percentage entered\n");
    }
}