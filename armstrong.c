#include<stdio.h>

int main()

{

    int arr[10];
    int j;
    printf("enter digit of your number : ");
    scanf("%d",&j);
    printf("enter any nuber : ");
    for(int i=0;i<j;i++){
        scanf("%d",&arr[i]);
    }
    
    return 0;
}