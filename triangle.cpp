#include <stdio.h>
int main() {
    int angle1, angle2, angle3;
    printf ("Enter first angle of triangle: ");
    scanf ("%d", &angle1);
    printf ("Enter second angle of triangle: ");
    scanf ("%d", &angle2);
    angle3 = 180 - (angle1 + angle2);
    if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        printf ("The triangle is a right triangle.\n");
    else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
        printf ("The triangle is an obtuse triangle.\n");
    else
        printf ("The triangle is an acute triangle.\n");
    return 0;
}