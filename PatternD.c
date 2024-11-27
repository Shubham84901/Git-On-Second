// C program to print full 
// diamond shape pyramid 
#include <stdio.h> 

// Prints diamond pattern 
void printDiamond(int n){
    printf("Enter Diagonal Width : ");
    scanf("%d\n ",&n);
	int space = n - 1; 
	// Run loop till the number 
	// of rows
    int i=0; 
	do{
        int j=0;
		// Loop for the initially space 
		// before the star printing 
        do{ 
			printf(" ");
            j++; 
        }while(j<=space);
		// Print the i+1 stars 
        j=0;
		do{ 
			printf("* "); 
            j++;
        }while(j<=i);
        i++; 
		space--;
		printf("\n"); 
	}while(i<n);
	// Repeat again in the reverse order 
	space = 0; 
	// run a loop till number of rows
    i=n-1; 
	do{
		// Loop for the initially space 
		// before the star printing 
        int j=0;
        do{ 
			printf(" ");
            j++; 
        }while(j<=space+1);
		// Print the i stars 
        j=0;
		do{
			printf("* "); 
            j++;
        }while(j<i);
        i--;
		space++;
		printf("\n");  
	}while(i>0); 
} 

// Driver code 
int main(){
    int n;
	printDiamond(n); 
	return 0; 
}
