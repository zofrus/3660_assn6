// Jason Fuller, Jordan Carter
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

int main(int argc, char *argv[]) {
	FILE *fp = stdin;
	int requests[BLOCK_REQS];
	int count = 0;

	// Basic error handling
	if (argc > 1) {
		fp = fopen(argv[1], "r");
		if (fp == NULL) {
			perror("Unable to open file");
			return (-1);
		}
	}

	// Fill array from file; increment count.
	while (count < BLOCK_REQS && 1 == fscanf(fp, "%d", &requests[count])) {
		count++;
	}
	
	// Call to Algorithms here
	FCFS(requests, count);
	SSTF(requests, count);
	Look(requests, count);
	CLook(requests, count);

	return 0;
}
