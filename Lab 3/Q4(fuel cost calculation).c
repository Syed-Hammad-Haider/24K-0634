#include <stdio.h>
int main()
{
float average,consumption,Fwd_cost,Bwd_cost
printf("Enter the distance(in km) traveled per litre fuel: ");
scanf("%f",&average);
if (average>0){
  consumption=1207/average;
  Fwd_cost=consumption*118;
  Bwd_cost=consumption*123;
  printf("Total cost= %f",Bwd_cost+Fwd_cost);
  printf(" Total fuel consumed= %f",consumption*2);}
else
printf(" Please enter a valid number");
}
