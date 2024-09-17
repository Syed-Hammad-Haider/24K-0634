#include <stdio.h>
int main(){
int ID,units;
float rate,cost,surcharge=0.0;
char name[100];
printf("Customer ID: ");
scanf("%d",&ID);
printf("Customer name: ");
scanf("%s",&name);
printf("Units consumed: ");
scanf("%d",&units);

if (units<=199){
   cost=16.20*units;
   rate=16.20;}
else if (units>=200 && units<300){
   cost=20.10*units;
   rate=20.10;}
else if(units>=300 && units<500){
   cost=27.10*units;
   rate=27.10;}
else{
	cost=35.90*units;
	rate=35.90;
	if (cost>18000)
	  surcharge=cost*0.15;}
	                
printf("Customer ID:%d\n",ID);
printf("Customer name:%s\n",name);
printf("Units consumed:%d\n",units);
printf("Amount charges @Rs %.2f per unit:%.2f\n",rate,cost);
printf("Surcharge amount:%.2f\n",surcharge);
printf("Net amount:%.2f",cost+surcharge);