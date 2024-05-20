#include<stdio.h>

struct person{
    int age;
    float salary;
};

int main(){

    struct person salim = {.age=22, .salary=10000};

    printf("Salim is %d years old, earns %.2f $", salim.age, salim.salary);
    return 0;
}
