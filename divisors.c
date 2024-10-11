#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int b,n,s=0;
    scanf("%d %d",&b,&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    while( s<n)
    {
        if(a[s]==0)
            b--;
        else
        {
            b--;
            b=b+3;
        }
        s++;
         if(b==0)
    {
        printf("Oops! You have been kicked out of the game in %d Obstacle",s);
        return 0;
    }
    }
   
        printf("Hurray! You won the game by %d balls remaining",b);
    
   return 0;
}