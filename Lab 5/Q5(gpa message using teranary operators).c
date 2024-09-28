#include <stdio.h>
int main(){
float gpa;
printf("Enter yout gpa ");
scanf("%f",&gpa);

(gpa>0.0 && gpa<1.0)? printf("Failed semester---registration suspended"):
(gpa>=1.0 && gpa<2.0)? printf("on probation for next semester"):
(gpa>=3.0 && gpa<3.50)? printf("Dean's list for semester"):
(gpa>=3.50 && gpa<=4.00)?printf("Highest honors for semester"):
(gpa<0.0 || gpa>4.00)? printf("Invalid range"):
printf("***no message***");
}