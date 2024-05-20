#include<stdio.h>

void function(a,b){
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    int sum = a+b;

    printf("Sum is %d", sum);
}

int main(){

    printf("Playing with function\n");
    function(1,2);

    return 0;
}
