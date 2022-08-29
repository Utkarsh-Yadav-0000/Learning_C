#include <stdio.h>
int main(){
    float p,r,t,s;
    printf("Enter Principal amount : ");
    scanf("%f",&p);
    printf("Enter rate of interest   : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    s=(p*r*t)/100;
    printf("The Simple Interest is : %f",s);
    return 0;
}