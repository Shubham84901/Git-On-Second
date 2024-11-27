#include <stdio.h>
int main() {

    int i, n,count =0;
    // 1st 10 odd numbers of fibonacci series are: [1,1,3,5,13,21,55,89,233,377],987,1597
    // initialize first and second terms
    int t1=0, t2=1;
    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;
    // get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // print the first two terms t1 and t2
    printf("First Ten Odd Numbers Of Fibonacci Series Are: %d, %d, ", t1+1, t2);
    // print 3rd to nth terms
    while(count != n){
        for (i = 3; i <= n; i++){
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
            if(nextTerm % 2 !=0 ){
               count++;
               if(t1==0){
                break;
               }
               printf("%d, ", nextTerm);
            }
        }
    }
    printf("\n----------END--------- \n");
    return 0;
}
