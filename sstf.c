#include "assn6.h"

void SSTF(int *requests, int count) {
	 int temp_array[count];
           int flag[count];
        int difference = 0,
              temp_int = 0,
               current = 0,
                  next = 0,
                     i = 0,
                     j;

for (i = 0; i < count ; i++) {
    temp_array[i] = requests[i];
    flag[i] = 0;
}

flag[current] = -1;
i = 0;

while ( i < count ) {
    
    i++;
    j = 0;

    while (j < count) {
        
        if (flag[j] == -1 || j == current){ j++; }

        else if ( temp_int == 0){
            temp_int = abs(temp_array[current] - temp_array[j]);
            next = j;
            j++;
        }
    
        else if(abs(temp_array[current] - temp_array[j]) < temp_int){
            temp_int = abs(temp_array[current] - temp_array[j]);
            next = j;
            j++;
        }

        else { j++; }
    }

    difference += temp_int;
    flag[current] = -1;
    current = next;
    temp_int = 0;

	}

printf ("SSTF Total Seek: %d\n", difference);

}