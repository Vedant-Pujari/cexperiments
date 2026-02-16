#include<stdio.h>
#include<conio.h>

int main()
{
    FILE*  f = fopen("why.txt","w");
    int size = 0;
    printf("Enter total number of letters: ");
    scanf("%d",&size);
    printf("Start typing now..\n");
    for(int i=0;i<size;i++)
        fputc(getch(),f);    

    return 0;
}