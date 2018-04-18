#include "assn6.h"

void SSTF(int *requests, int count) {
	 int temp_array[count];
     int difference = 0, 
     		current = 0, 
              clean = 0,
               temp_int= 0,
               next = 0,
                val = 0,
				  i = 0,
                  j = 0;

for (i = 0; i < count ; i++) {
    temp_array[i] = requests[i];
}
i = 0;
	while ( i < count) {
	    current = requests[i];
        clean = temp_array[next];
        int last = next;
        temp_int= 0;
        for (j = 0; j < count; j++) {
            if (j==next){j++;}
            val = clean;
            printf("\n\n=====\nval = %d\n", clean);
            if (temp_array[j] != -1 && temp_array[j]!= val){
            int comp = temp_array[j];
            printf("j = %d array_index = %d\n", j, comp);
            int diff= (abs(val - comp));
            printf("temp=%d\n", diff);
            if(temp_int== 0) {temp_int = diff;}
            if(diff < temp_int) {
                temp_int = diff;
                next = j;
                printf("___next = %d\n", next); 
            }
            
            if(j == count - 1 ){
                difference += temp_int;
                printf("difference = %d\n", difference);
                printf("temp_array[i] = %d temp[last = %d]\n", temp_array[i], temp_array[last]);
                printf("i - %d\n",i);
                // (i == 0) ? 
                // (temp_array[i] = -1) :
                (temp_array[last] = -1);
                printf("AFTER --- temp_array[i] = %d and temp[last] = %d\n", temp_array[i], temp_array[last]);
            }
            }
            // printf("current: %d\n diff:%d\n difference: %d\n", current, diff, difference);
        }
        printf("OUTSIDE temp_array[i] = %d\n", temp_array[i]); 
		// (next > current) ? 
		// (difference += next - current) : 
		// (difference += current - next);
		i++;
	}

	 printf ("SSTF Total Seek: %d\n", difference);
}