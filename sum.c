#include<stdio.h>

void main()
{
    int nums[4];
    nums[0] = 2;
    nums[1] = 7;
    nums[2] = 11;
    nums[3] = 12;

    int target = 13;
    int i = 0,j = 0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i!=j)
            {
                if((nums[i]+nums[j]) == target)
                {
                    printf("i:%d j:%d ",i,j);
                    break;
                }

            }

        }
    }
}