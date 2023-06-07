/*Write a program to create a structure COMPLEX to represent a complex number. Using 
the structure write a program to add two complex numbers and display their sum*/
#include"stdio.h"
typedef struct
{
    int rel;
    int img;
}complex;
void main()
{
   complex num[2];
   int sum_rel=0,sum_img=0;
   for(int i=0;i<2;i++)
   {
       printf("Enter the real part of complex no %d\n",i+1);
       scanf("%d",&num[i].rel);
       printf("Enter the imaginary part of complex no %d\n",i+1);
       scanf("%d",&num[i].img);
   }
   //printing the complex no
    for(int i=0;i<2;i++)
    {
        printf("\n complex no %d is:\n",i+1);
        printf("%d + %di",num[i].rel,num[i].img);
    }
    //addition of two complex no
    for(int i=0;i<2;i++)
    {
        sum_rel=sum_rel+num[i].rel;
        sum_img=sum_img+num[i].img;
    }
    //printing the sum of complex no
    printf("\n sum of two complex no is: %d + %di",sum_rel,sum_img);

}
