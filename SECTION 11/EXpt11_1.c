/* A student is represented by the following attributes:
− Roll number (int)
− Name (string)
− Mark in subject 1 (float)
− Mark in subject 2 (float)
− Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each 
student and average mark of all students*/
#include"stdio.h"
typedef struct 
{
    int roll_no;
    char name[30];
    float sub1,sub2,sub3;
}studentinfo;  //user defined datatype
void main()
{   
    float avg[30],tmarks[30];
    studentinfo studs[30];//arrays of structure
    printf("\nEnter students informations\n");
    printf("======\t======\t======\t======\n");
    for(int i=0;i<3;i++)
    {
        printf("student %d\n=============\n",i+1);
        printf("Roll no.:");
        scanf("%d",&studs[i].roll_no);
        fflush(stdin);
        printf("Name:");
        gets(studs[i].name);//scanf("%s",studs[i].name);
        printf("Marks of sub1,sub2 and sub3: ");
        scanf("%f %f %f",&studs[i].sub1,&studs[i].sub2,&studs[i].sub3);

    }
    for(int i=0;i<3;i++)
    {
    tmarks[i]=(studs[i].sub1 + studs[i].sub2 + studs[i].sub3);
    avg[i]=tmarks[i]/3.0;
    }
    for(int i=0;i<3;i++){
         printf("\n========\t=====\t=======");
        printf("\nTotal marks and average marks of Roll no  %d student %g and %g",i+1,tmarks[i],avg[i]);
    }
}