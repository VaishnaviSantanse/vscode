
#include<stdio.h>
#include<string.h>
void main()
{
  int i,len;
  char str1[20],str2[20]; 
  char str[]="hello world";
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    printf("%c",str[i]);
    }
  printf("\n");
   for(i=0;i<len;i++)
  {
    str1[i]=str[i] ^ 0;
    printf("%c",str1[i]);
   }
      printf("\n");

for(i=0;i<len;i++)
  {
    str1[i]=str[i] ^ 127;
    printf("%c",str1[i]);
   }
}

output:-
mit@mit-ThinkCentre-E73:~$ cd Desktop
mit@mit-ThinkCentre-E73:~/Desktop$ gcc encry.c
mit@mit-ThinkCentre-E73:~/Desktop$ ./a.out
hello world
hello world
mit@mit-ThinkCentre-E73:~/Desktop$ 



