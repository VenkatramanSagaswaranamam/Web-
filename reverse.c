#include<stdio.h>
#include<string.h>
 
int main() {
   char str[10], t;
   int i, j = 0;
 
     gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      t = str[i];
      str[i] = str[j];
      str[j] = t;
      i++;
      j--;
   }
 
      return (0);
}
