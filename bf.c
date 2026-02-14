#include<stdio.h>
#include<conio.h>

#define size 10
#define MIN_PTR 0
#define MAX_PTR size-1
#define MAX_VALUE 255

int main()
{
    int array[size] = {0},ptr = 0;
    char input;
    int flag=0;
    
    printf("Welcome to the BF interpreter..\n");
    printf("Press 'i' to list all available input symbols or press any key to start.\n");
    input = getch();
    if(input=='i')
    {
        printf("'<' = Move pointer left\n");
        printf("'>' = Move pointer right\n");
        printf("'+' = Increment value by 1\n");
        printf("'-' = Decrement value by 1\n");
        printf("'.' = Print value\n");
        printf("',' = Input a value\n");
        printf("'s' = Print whole array\n");
        printf("'`' = Start a sequence \n");
        printf("'c' = Exit\n");
    }

    while(1)
    {   
        flag=0;
        input = getch();

        if(input=='<')
        {
            if(ptr==0) 
                ptr=MAX_PTR;
            else
                ptr--;
        }

        if(input=='>')
        {
            if(ptr==MAX_PTR) 
                ptr=MIN_PTR;
            else 
                ptr++;
        }

        if(input=='+') 
        {
            if(array[ptr]==MAX_VALUE) 
                printf("MAX VALUE"); 
            else 
                array[ptr]++;
        }

        if(input=='-') 
        {
            if(array[ptr]==0) 
                array[ptr]=MAX_VALUE;
            else 
                array[ptr]--;
        }

        if(input=='.') 
            printf("%c\n",(char) array[ptr]);

        if(input==',')
        {
            printf(":"); 
            scanf("%d",&array[ptr]);
        }

        if(input=='`')
        {
            printf("Sequence in process..\n");
            if(ptr==0)
            {
                ptr++;
                flag=1;
            }
            if(array[ptr-1]!=0)
            {
                while(array[ptr-1]!=0)
                {
                    array[ptr-1]--;
                    array[ptr]++;
                }
                printf("%d\n",array[ptr]);
                if(flag==1) ptr--;
            }
            else
            {
                if(flag==1) ptr--;
            }
            printf("Sequence completed..\n");
        }

        if(input=='c') 
            break;

        if(input=='s')
        {
            for(int i=0;i<size;i++)
            {
                printf("[%d]",array[i]);
            }
            printf("\n");
        }

        printf("Pointer at [%d]\n",ptr);
    }
    
    // int val = sizeof(array)/sizeof(int);
    // printf("%d",val);
    return 0;
}