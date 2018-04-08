#include <stdio.h>
#include <ctype.h>


int main () 
{
   const int MAX = 40;
   int a = 0;
   int i = 0;
   char str[MAX];
   char ch;

   printf("Inserire la stringa\n");

   while( ch != '\n' && a<MAX)
     {
	ch = getchar();
	str[a] = toupper (ch);
	a++ ;
     }
    str[a] = '\0';

    for(i=0; i<a; i++)
       printf("%c",str[i]);
	
    printf("\n") ;
  
   return(0);
}

