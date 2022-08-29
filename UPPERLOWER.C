#include <stdio.h>
int main(){
   char k;
   printf("Enter character : ");
   scanf("%c",&k);
   if(k>= 'A' && k<='Z'){
   printf("Upper case");
   }
   if(k>= 'a'&& k <='z'){
    printf("Lower case");
   }
   else{
    printf("Not english");
   }
    return 0;
}