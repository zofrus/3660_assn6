#include "assn6.h"

int main(int argc, char *argv[]) {
	FILE *fp = stdin;
	int requests[BLOCK_REQS];
	int count = 0;

	// basic error handling
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

	return 0;
}