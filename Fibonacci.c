#include <stdio.h>
#include <math.h>


void myfunc(double num1, double num2);
long long Fibonacci(int num3);
long long arrayofFibonacci[100] = {0, 1};

int main(){
    int num3;
    printf("=============================================\n");
    printf("num3:");
    scanf("%d", &num3);
    printf("%lld\n",Fibonacci(num3));
    for (int i = 0; i < 100; i++) {
        printf("%lld ", arrayofFibonacci[i]);
    }
    return 0;
}


long long Fibonacci(int num3){
    if(arrayofFibonacci[num3] != 0 || num3 == 0)
        return arrayofFibonacci[num3];
    arrayofFibonacci[num3] = Fibonacci(num3 - 1) + Fibonacci(num3 - 2);
    return arrayofFibonacci[num3];
}
