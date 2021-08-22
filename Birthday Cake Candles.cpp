//Solve Algorithms | HackerRank
//You are in charge of the cake for a child's birthday. You have decided the cake will
//have one candle for each year of their total age. They will only be able to blow out the
//tallest of the candles. Count how many candles are tallest.
#include <assert.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,max,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(max==arr[i])
        c++;
    }
    printf("%d",c);
    return 0;
}
