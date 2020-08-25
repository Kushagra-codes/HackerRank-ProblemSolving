#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hh,mm,dd;
    char c[10];
    scanf("%d:%d:%d%s",&hh,&mm,&dd,c);
   if(strcmp(c,"PM")==0 && hh!=12) hh+=12;
   if(strcmp(c,"AM")==0 && hh==12) hh=0;
   printf("%02d:%02d:%02d",hh,mm,dd);
   return 0;
}


