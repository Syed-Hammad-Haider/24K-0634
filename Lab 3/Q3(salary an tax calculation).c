#include <stdio.h>
int main()
{
int salary;
float taxrate,tax,rem_sal;
printf("Enter salary: ");
scanf("%d",&salary);
printf("Enter tax rate(in percentage): ");
scanf("%f",&taxrate);
tax=salary*(taxrate/100);
rem_sal=salary-tax;
printf("Tax = %f\n",tax);
printf("Remaining salary =%f\n",rem_sal);
}