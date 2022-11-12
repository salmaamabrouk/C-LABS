#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//C Program to calculate sum of student degrees, and average of each subject, asks the user for students and subject numbers. (Dynamic Allocation of 2D Array - Pointer to Pointer)
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Std_num = 0;
    int Cr_num = 0;
    int i = 0;
    int j = 0;
    int Std_sum;
    int Cr_sum;
    float Cr_Avg = 0;
    printf("Please enter the total number of students\n");
    scanf ("%d", &Std_num);
    int ** St = (int**) malloc(Std_num*sizeof(int*));
    printf("Please enter the number of courses\n");
    scanf ("%d", &Cr_num);
    for (i = 0; i < Std_num; i++)
    {
        St[i] = (int*)malloc(Cr_num*sizeof(int));
    }
    for (i = 0; i < Std_num; i++)
    {
        for (j = 0; j < Cr_num; j++)
        {
            printf ("Please enter student number (%d) grade in course number (%d)\n",i+1,j+1);
            scanf ("%d",&St[i][j]);
        }
    }

    for (i = 0; i < Std_num; i++)
    {
        Std_sum = 0;
        printf ("Student number (%d) grades are\n",i+1);
        for (j = 0; j < Cr_num; j++)
        {
            printf ("Course number (%d): %d\n",j+1,St[i][j]);
            Std_sum += St[i][j];
        }
        printf ("Total Grades : %d\n",Std_sum);
    }
    for (j = 0; j < Cr_num; j++)
    {
        Cr_sum = 0;
        for (i = 0; i < Std_num; i++)
        {
            Cr_sum += St[i][j];
        }
        Cr_Avg = (float) Cr_sum / Std_num;
        printf("Course number (%d) average is %f\n",j + 1, Cr_Avg);
    }

    return 0;
}
