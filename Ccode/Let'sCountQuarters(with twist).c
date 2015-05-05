#include <stdio.h>

main ()
{
	printf ("hello, future.\nThis is a set of experiments.\n");
	printf ("Let's count to 13 from zero, in increments of 0.25, with a twist.\n");

	float start, stop, change;

	start = 0;
	stop = 13;
	change = 0.25;

	while (start <= stop) 
		{
		printf("%2.2f\n", start);
		start = start+change;
		}

	printf ("\nNow that's done.  And in reverse?\n\n");

	float start2, stop2, change2;

	start2 = 13;
	stop2 = 0;
	change2 = 0.25;

	while (start2 >= stop2) 
		{
		printf("%2.2f\n", start2);
		start2 = start2-change2;
		}
		
	printf ("\nBeautiful.\n\n");


;
}