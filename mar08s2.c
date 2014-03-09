//140308s at Rhodes shopping center, demoing for Amy; STILL DOESN'T WORK; I'VE CHECKED EVERY CHARACTER, AND TRIED ALL KINDS OF ADJUSTMENTS.

#include <stdio.h>

main ()
	{
		long nc;
		nc = 0;
		while (getchar() != EOF)
			++nc;
		printf("%ld\n", nc); 
	}