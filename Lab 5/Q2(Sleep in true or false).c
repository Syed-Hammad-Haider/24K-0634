#include <stdio.h>
int main() {
char weekday,vacation;
bool flag1,flag2;	
printf("Is it a weekday?('y' for YES and 'n' for NO)");
scanf(" %c",&weekday);
printf("Are we on a vacation?('y' for YES and 'n' for NO)");
scanf(" %c",&vacation);
switch (weekday){
case 'y':
   flag1=true;
   break;
case 'n':
   flag1=false;
   break;
default:
   printf("Invalid choice. Enter again");
   break;} 
   
switch (vacation){
case 'y':
   flag2=true;
   break;
case 'n':
   flag2=false;
   break;
default:
   printf("Invalid choice. Enter again");
   break;}
if (weekday==false || vacation==true)
   printf("True");
else
   printf("False");   
}
