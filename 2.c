#include<stdio.h>
#include<unistd.h>

int main()
{
 int mypid;
 mypid=getpid();
 printf("%d\n",mypid);
 while(1);
 return 0;
 
}

edited by ELWIN-2
