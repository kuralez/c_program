#include<stdio.h>
#include<math.h>

int min(int a, int b){
    if(a>b)
        return b;
    return a;
}

int max(int a, int b){
    if(a>b)
        return a;
    return b;
}

int main(){
    int l = 1189;
    int b = 841;
    printf("A0 : %d x %d", l, b);
    for(int i=0; i<8; i++){
        int new_l = max(l, b);
        int new_b = min(l, b);
        l = new_l/2;
        b = new_b;

        printf("\nA%d : %d x %d", i+1, l, b);
    }
    return 0;
}