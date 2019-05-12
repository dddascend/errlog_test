#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <errno.h>

int main (int argc,char ** argv)
{
FILE *fp = fopen("testperror1.txt","r");

if(fp ==  NULL)
{
printf("fp null\n");
perror("__function__");
strerror(errno);
printf("errno %d\n", errno);
fp = fopen("strerror.txt", "w");
fprintf(fp, "strerror %s\n", strerror(errno));
}
else
{
printf("pre close\n");
fclose(fp);
}

return 0;
}

