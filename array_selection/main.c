#include <stdio.h>
#include <stdlib.h>
// 尋找陣列連續元素最大和

int main()
{
    int array[] = {100, 0, -10, 50, 30, 80, 90, 10, 1};
    int length = 4;
    int sum = 0;
    int output[length];

    for(int i=0; i<sizeof(array)/sizeof(array[0])-(length-1); i++)
    {
        int temp = 0;
        for(int j=i; j<i+length; j++)
        {
            temp += array[j];
        }

        if(temp>sum)
        {
            sum = temp;
            for(int j=0; j<length; j++)
            {
                output[j] = array[i+j];
            }
        }
    }
    printf("[ ");
    for(int k=0; k<sizeof(output)/sizeof(output[0]); k++)
    {
        printf("%d ",output[k]);
    }
    printf("]");
    return 0;
}

