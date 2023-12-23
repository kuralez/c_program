#include <stdio.h>
#include <math.h>

int main(){
    int r,g,b;
    float w,c,m,y,bl;
    printf("Enter the values");
    scanf("%d,%d,%d",&r,&g,&b);
    if(r>=0 && r<=255 && g>=0 && g<=255 && b>=0 && b<=255 ){
        if(r/255>g/255 && r/255>b/255)
        w=r/255;
        else if(b/255>r/255 && b/255>g/255)
        w=b/255;
        else
        w=g/255;
        c=(w-(r/255))/w;
        m=(w-(g/255))/w;
        y=(w-(b/255))/w;
        bl=1-w;
        printf("value of cyan:%f",c);
        printf("value of magenta:%f",c);
        printf("value of yellow:%f",c);
        printf("value of black:%f",c);

    }

    else printf("Invalid Inputs");
    return 0;

}