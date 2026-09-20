
#include <stdio.h>

int main() {
    int n,digit, product=1;
    int has_odd=0;
    printf("Enter  number: ");
    scanf("%d", &n);

    if(n<0){
          n= -n;
    }
    while (n!=0) {
          digit=n%10;
          
        if ((digit%2) !=0) {
              product=product*digit;
        has_odd = 1;
        }
        n=n/10;
    }
       if(has_odd)
       printf("Product of odd digits = %d ",product);
   else
   printf("No odd Digits");
    return 0;
}

