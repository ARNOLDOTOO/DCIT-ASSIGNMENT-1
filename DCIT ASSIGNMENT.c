#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10000]={1-10000};   // 1
    int i,evenSum=0,evenCount=0; //  2
    double avgOdd,avgEven;//3

    for(i=0; i<6; i++){  //4
        if(arr[i]%2==0){
        evenSum=evenSum+arr[i];  //5
        evenCount++;
        }
    
    }
   
    avgEven=evenSum/evenCount;
    
    printf("\nThe average of even numbers are: %.2f",avgEven);
    getch();
    return 0;
}