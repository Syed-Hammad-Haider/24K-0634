#include <stdio.h>
#include <math.h>
typedef struct
{
    float x;
    float y;
} Point;
float calculate_distance(Point pt1, Point pt2);
int is_within_boundary(Point pt, Point lower_left, Point upper_right);

int main()
{
    Point pt1, pt2;
    printf("Enter the x and y coordinates of Point 1: ");
    scanf("%f %f", &pt1.x, &pt1.y);
    printf("Enter the x and y coordinates of Point 2: ");
    scanf("%f %f", &pt2.x, &pt2.y);
    printf("The distance between the points is %.2f\n", calculate_distance(pt1, pt2));
    Point lower_left, upper_right;
    printf("Enter the coordinates of the lower-left point of the rectangle: ");
    scanf("%f %f", &lower_left.x, &lower_left.y);
    printf("Enter the coordinates of the upper-right point of the rectangle: ");
    scanf("%f %f", &upper_right.x, &upper_right.y);
    if (is_within_boundary(pt1, lower_left, upper_right))
    {
        printf("Point 1 lies within the rectangular boundary\n");
    }
    else
    {
        printf("Point 1 does not lie within the rectangular boundary\n");}
    if (is_within_boundary(pt2, lower_left, upper_right))
    {
        printf("Point 2 lies within the rectangular boundary\n");
    }
    else
    {
        printf("Point 2 does not lie within the rectangular boundary\n");
    }

    return 0;}

float calculate_distance(Point pt1, Point pt2)
{
    return sqrtf(powf(pt2.x - pt1.x, 2) + powf(pt2.y - pt1.y, 2));}

int is_within_boundary(Point pt, Point lower_left, Point upper_right)
{
    return (pt.x >= lower_left.x && pt.y >= lower_left.y && pt.x <= upper_right.x && pt.y <= upper_right.y);}
