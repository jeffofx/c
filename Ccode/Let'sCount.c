#include <stdio.h>

main ()
{
	printf ("hello, future.\nThis is a set of experiments.\n");
	printf ("Let's count to 13 from zero.\n");

	int start, stop, change;

	start = 0;
	stop = 13;
	change = 1;

	while (start <= stop) 
		{
		printf("%d\n", start);
		start = start+change;
		}
	
;
}