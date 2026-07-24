#include <stdio.h>

int main()
{
    float a;
    printf("Enter Mark");
    scanf("%f",&a);

   if (a<0 || a>100)
   {
        printf("Invalid Marks");
   }
    else if (a>=80 )
    {
        printf("A+");
    }
    else if (a<80 && a>=70)
    {
        printf("A");
    }
    else if (a<70 && a>=60)
    {
        printf("A-");
    }
    else if (a<=60)
    {
       printf("F");
    }
    return 0;
}
