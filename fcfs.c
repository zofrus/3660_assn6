#include "assn6.h"

void FCFS(int *requests, int count) {
	 int difference = 0, 
	 	 	   next = 0, 
			current = 0, 
				  i = 0;

	while ( i < count - 1 ) {
		current = requests[i];
		next = requests[i + 1];
		(next > current) ? 
		(difference += next - current) : 
		(difference += current - next);
		i++;
	}

	 printf ("FCFS Total Seek: %d\n", difference);
}