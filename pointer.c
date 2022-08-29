#include<stdio.h>
// pointer values
int main () {
    
    int age = 30;
    int*ptr = &age;
    
    printf("%d\n" , age);
    printf("%d\n" , &age);
    printf("%d\n" , *ptr);
    printf("%d\n" , *(&age));
    return 0;
}