// Online C compiler to run C program online
#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float percent;
    int semester;
    int year;
};
struct student std[5];

int main()
{   
    // taking input of students data
    
    for (int i=0; i < 5; i++)
    {
        printf("enter the roll of %d student\n", i);
        scanf("%d", &std[i].roll);
        printf("enter the name of %d student\n", i);
        scanf("%s", std[i].name);
        printf("enter the percent of %d student\n", i);
        scanf("%f", &std[i].percent);
        printf("enter the semester number of %d student\n", i);
        scanf("%d", &std[i].semester);
        printf("enter the year of %d student\n", i);
        scanf("%d", &std[i].year);
    }

    // showing output of the student data

    for (int i = 0; i < 5; i++)
    {
        printf("the roll of %d student is %d\n", i, std[i].roll);

        printf("enter the name of %d student %s\n", i, std[i].name);

        printf("enter the percent of %d student %f\n", i, std[i].percent);

        printf("enter the semester  of %d student is %d \n", i, std[i].semester);

        printf("enter the year of %d student is %d\n", i, std[i].year);
    }

    return 0;
}