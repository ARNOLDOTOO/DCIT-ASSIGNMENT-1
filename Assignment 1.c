#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,evenSum=0,evenCount=0,size; //  1
    single avgEven;//2
printf("10000: "); //3 
scanf("%d",&size);
int arr[size];  //4
    
    printf("1-10000: ");//5
    for(i=0; i<size; i++){//6
            scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++){//7
        if(arr[i]%2==0){//8
        evenSum=evenSum+arr[i];
        evenCount++;
        }
        
    }
      
    avgEven=evenSum/evenCount;
    printf("\nThe average of even numbers are: %.2f",avgEven);
    getch();
    return 0;
}