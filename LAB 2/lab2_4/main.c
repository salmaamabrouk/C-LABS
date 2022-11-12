#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    int score;
    printf("Please enter your score (Between 0 and 100)\n");
    scanf("%d", &score);

    if(score >= 85 && score <= 100)
    {
        printf("Excellent");
    }
    else if(score < 85 && score >= 75)
    {
        printf("Very Good");
    }
    else if(score < 75 && score >= 65)
    {
        printf("Good");
    }
    else if(score < 65 && score > 50)
    {
        printf("Pass");
    }
    else if(score <= 50 && score >= 0)
    {
        printf("Fail");
    }
    else if(score < 0 && score > 100)
    {
        printf("Invalid Score");
    }


    return 0;
}
