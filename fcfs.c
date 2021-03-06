// Author: Jason Fuller
/******** Group project **********/
// CS 3060 Spring 2018
// Assignment #6
/* Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/

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