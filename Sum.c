#include <stdio.h>
int main() {
    int n=100, i=1, sum = 0;
    while(i<=n) {
        if(i%10==3){
            sum +=i;
        }
        i++;
    }

    printf("Sum = %d", sum);
    return 0;
}

