#include <stdio.h>
int main()
{
float x1,y1,x2,y2,slope;
printf("first point x-coordinate: ");
scanf("%f",&x1);
printf("first point y-coordinate: ");
scanf("%f",&y1);
printf("second point x-coordinate: ");
scanf("%f",&x2);
printf("second point y-coordinate: ");
scanf("%f",&y2);
slope=(y2-y1)/(x2-x1);
printf("slope=%.3f",slope);
}