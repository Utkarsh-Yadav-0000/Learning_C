#include <stdio.h>
int main(){
    int f,c;
    printf("Enter temperature in fahrenheit : ");
    scanf("%d",&f);
    c=(f-32)*5/9 ;
    printf("The corresponding temperature in celsisus is : %d",c);
    return 0;
}