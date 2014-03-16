//140316u Macq 
// test != precedence and boolean output
//see p17 of K&R
#include <stdio.h>
main(){                 //start
	int bol;   //make bol type int
	
	//test 1...
	printf("getchar:");   //print prompt
	bol = getchar() != EOF; 
    /*set bol eqto the result of:
    != test */
	printf("\nbol=%d\n", bol); //print value
	
	//test 2...
	printf("(getchar...):");   //print prompt
    bol = (getchar() != EOF); 
    /*set bol eqto the result of:
    != test with parantheses  */
	printf("\nbol=%d\n", bol); //print value
	
	/*PROBLEM: if EOF is entered at first prompt, 2nd & 3rd getchar are fed EOF too. */
	
		//test 3...
	printf("(...getchar):");   //print prompt
    (bol = getchar()) != EOF; 
    /*set bol eqto getchar, then test != */
	printf("\nbol=%d\n", bol); //print value
}