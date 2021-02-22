#include<stdio.h>
// This Code is Contributed by Nabhya.
int main(){
    int n = 0;
    int first = 0;
    int second = 1;
    int sum = 0;
    printf("Enter number upto which you need fibnacci series\n");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        if(i < 2){
            sum = i;
        }
        else
        {
            sum = first + second;
            first = second;
            second = sum;
        }

        printf("%d ",sum);
    }
    return 0;
}