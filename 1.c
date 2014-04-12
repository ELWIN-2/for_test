#include<stdio.h>
#include<unistd.h>

int main()
{
 int mypid;
 mypid=syscall(20);
 printf("%d\n",mypid);
 while(1);
 return 0;
 
}

add some thing
