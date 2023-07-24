#include<stdio.h>
int main(){
    float f,c;
    printf("enter the temperature:");
    scanf("%f",&f);
    c=(f-32)*(0.5)/(0.9);
    printf("%f",c);
    return 0;
}