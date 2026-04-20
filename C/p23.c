/*
    *
   * *
  *   *
 *     *
* * * * *

*/


#include<stdio.h>
main(){
	int i,j,k,n=7;
	for(i=1; i<=n; i++){
		for(k=1; k<=n-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			if(i == 1 || i == n || j == 1 || j == i )
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	
	}
	
}

