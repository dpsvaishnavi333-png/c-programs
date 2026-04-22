#include <stdio.h>
int main() {
    char ch;
   printf("enter the element:");
   scanf("%c",&ch);
   char res=!(ch=='a')||!(ch=='e')||!(ch=='i')||!(ch=='o')||!(ch=='u')||!(ch=='A')||!(ch=='E')||!(ch=='I')||!(ch=='O')||!(ch=='U');
   printf("%c is a consonant i.e is:%d",ch,res);
    return 0;
}