#include <stdio.h>
//this is just for experiment
int main(int argc,char *argv[])
{
    for(int i=1;i<argc;i++)
    {
        printf("%d : %s \n",i,argv[i]);
    }

    return 0;
}