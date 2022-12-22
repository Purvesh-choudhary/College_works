#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int rollno;
    float percentage;

};
int main()
{
    int i;
    struct student st[5];
    for (i=0; i<5; i++)
    {
        printf("\nEnter Records of students( %d )\n",i+1);
        printf("Name: ");
        scanf("%s", &st[i].name);
        printf("Rollno: ");
        scanf("%d", &st[i].rollno);
        printf("Percentage: ");
        scanf("%f", &st[i].percentage);
    }
    printf("\nStudent Information List:");
    for (i=0; i<5; i++)
    {

        printf("\n Name:%s, Rollno:%d, Percentage:%f%", st[i].name, st[i].rollno, st[i].percentage);
    }
    return 0;
}