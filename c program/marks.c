#include<stdio.h>

int main(){
    float arr[5];
    float sum = 0;
    for(int i=0; i<5; i++){
        printf("\nEnter marks in subject %d : ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    float percentage = sum/5;
    printf("Total marks : %0.2f", sum);
    printf("\npercentage : %0.2f ", percentage);

    return 0;

}