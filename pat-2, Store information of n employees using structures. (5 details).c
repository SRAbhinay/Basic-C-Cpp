#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id;
    double salary;
    char add[50];
    int age;
} emp;
 
int main()
{
    int n;
    printf ("enter the number of employees: \n");
    scanf("%d", &n);
    emp emp[n];
 
    printf("PLEASE Enter the %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("\n");
        printf("Employee %d:- \n\n",i+1);
        printf("\nName: ");
        scanf("%s",emp[i].name);
        printf("\nId: ");
        scanf("%d",&emp[i].id);
        printf("\nSalary: ");
        scanf("%lf",&emp[i].salary);
        printf("\nAdress: ");
        scanf("%s",&emp[i].add);
        printf("\nAge:");
        scanf("%d",&emp[i].age);
        printf("\n");
    }

    for(int i=0; i<n; i++){
        printf("\n");
        
        printf("Name is ");
        printf("%s \n",emp[i].name);
 
        printf("Id is ");
        printf("%d \n",emp[i].id);
 
        printf("Salary is ");
        printf("%.2lf \n",emp[i].salary);

        printf("Adress is ");
        printf("%s \n",emp[i].add);

        printf("Age is ");
        printf("%d \n",emp[i].age);
 
        printf("\n");
    }
 
    return 0;
}
