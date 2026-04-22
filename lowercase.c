#include <stdio.h>

int main() {
   char ch;
   printf("enter the element:\n");
   scanf("%d",&ch);
   char res=(ch>='a')&&(ch<='z');
   printf("%c is lower case alphabet i.e is:%d", ch,res);
    return 0;
}