#include <stdio.h>
#include <math.h>

long long Fibonacci(int num);
long long arrayofFibonacci[100] = {0, 1};

int main(){
    int num;
    printf("=============================================\n");
    printf("num:");
    scanf("%d", &num);
    printf("%lld\n",Fibonacci(num));
    for (int i = 0; i < 100; i++) {
        printf("%lld ", arrayofFibonacci[i]);
    }
    return 0;
}


long long Fibonacci(int num){
    if(arrayofFibonacci[num] != 0 || num == 0)
        return arrayofFibonacci[num];
    arrayofFibonacci[num] = Fibonacci(num - 1) + Fibonacci(num - 2);
    return arrayofFibonacci[num];
}
