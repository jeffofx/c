/*written 140307f Macquarie*/

#include <stdio.h>  
                                   /*include std library functions, e.g. getchar and putchar*/

main ()                    /*start Main function (with no arguments/inputs)*/
{                               /*open Main function script*/
	int c;                    /*define c as an integer (so that EOF can terminate loop below)*/
	while (c != EOF)   /*start While loop (condition: while c isnoteaqualto EOF do                                               the following...*/
  	{                         /*open While loop script*/
	c = getchar ();   /*get 1 character of user input and assign it to variable c*/

	putchar (c);        /*print c*/
  	}                        /*end While loop script*/
}                              /*end Main function script*/