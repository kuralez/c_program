#include <stdio.h>

int main(){
    int km,m,f,cm;
    printf("Enter distance between the cities in kilometer:");
    scanf("%d",&km);
    m=km*1000;
    f=m*3;
    cm=m*100;
    printf("Distance between the cities in meter: %d \n",m);
    printf("Distance between the cities in feet: %d \n",f);
    printf("Distance between the cities in centimeter: %d \n",cm);
    return 0;
}