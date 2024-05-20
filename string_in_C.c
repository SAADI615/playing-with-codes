#include<stdio.h>
int main(){
    char str[] = "salim sadman saadi";

    //fgets(str, sizeof(str), stdin);

    str[0]='S';
    str[6]='S';
    str[13]='S';

    printf("%s", str);
    return 0;
}
