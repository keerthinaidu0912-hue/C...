#include <stdio.h>
void main()
{
    float speed, time, distance;
    printf("Enter speed: ");
    scanf("%f", &speed);
    printf("Enter time: ");
    scanf("%f", &time);
    distance = speed * time;
    printf("Distance travelled = %.2f", distance);
}


    