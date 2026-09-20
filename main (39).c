
#include <stdio.h>
int main (){
int i;
char binary[100];
printf ("Enter binary number:");
scanf ("%s",binary);

for (i=0;binary[i]!='\0';i++){
      if(binary[i]=='1')
      printf("0");
      else if(binary[i]=='0')
      printf("1");

}

    return 0;
}

