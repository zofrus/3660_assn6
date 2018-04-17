#include 'assn6.h'

void FCFS(int *requests, int count) {
	 int ready[BLOCK_REQS]; 
	 int clock = 0;
	 int ta = 0, wait = 0, resp = 0;
	 int next = 0, current = 0, insert = 0;

	 while (next < count || current != insert) {
	 	if(current == insert){
		}
	 	
		while(next < count && requests[next] <= clock) {
			ready[insert] = next;
			next++;
			insert++;	
		}

		if(requests[currburst] > 0) {
		}
		current++;
	 }
	 printf ("First Come, First Served\n");
	 printf ("Avg. Resp.:%.2f, Avg. T.A.:%.2f, Avg. Wait:%.2f\n", (float)resp/count, (float)ta/count, (float)wait/count);
}
