#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of employees:");
    scanf("%d",&a);
   
    float $$;
    printf("Enter the given salary:");
    scanf("%f",&$$);

    int id[a];
    char name[a][25];
    float salary[a];

    printf("Enter the details of the employees\n") ;
 
    for(int i=0;i<a;i++)
    {
        printf("Enter the id of %d employee:",i+1);
        scanf("%d",&id[i]);
    }
   
    printf("\n");


    for(int j=0;j<a;j++)
    {
        printf("Enter the name of the %d employee :",j+1);
        scanf("%s",name[j]);
    }

    printf("\n");

    for(int k=0;k<a;k++)
    {
        printf("Enter the salary of %d employee : ",k+1);
        scanf("%f",&salary[k]);
    }

    printf("The details of employees with salary less than %f is/are :",$$);

    for(int p=0;p<a;p++)
    {
        if(salary[p]<$$)
        {
          printf("%d  %s  %f\n",id[p],name[p],salary[p]);
        }
    }
    return 0;
}