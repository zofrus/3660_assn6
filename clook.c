#include "assn6.h"


void CLook(int *requests, int count)
{
  int list[count];
  int head, headIndex, seek = 0, current = 0;
  int i;

  //copying the list of request times into a new array as to not overwrite the original
  for (i = 0; i < count; i++)
  {
   list[i] = requests[i];
  }

  //keeping track of the first request time in the unsorted list
  head = list[i];
  //sorting the list of request times
  sort(list, count);

  //finding head in the sorted list and setting current equal to the index at head
  while (list[current] != head)
  {
   current++;
  }

  //saving the index of head in the sorted array before modifying current
  headIndex = current;

  //keeping a running sum of the absolute value of head minus the item after head etc.
  while (current < count - 1)
  {
    seek += abs(list[current] - list[current + 1]);
    current++;
  }

  //finding the difference between the last item in the list and the first item in the list
  //adding the difference to the total seek time
  seek += abs(list[current] - list[0]);
  //setting our current index to one item before head
  current = 1;

  //adding the difference between the item before head and the item before that to total seek time
  //etc...
  while (current < headIndex)
  {
    seek += abs(requests[current] - requests[current - 1]);
    current++;
  }

  //printing the result
  printf("CLOOK Total Seek: %d\n", seek);

}

