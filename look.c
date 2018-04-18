#include "assn6.h"


void Look(int *requests, int count)
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
  head = list[0];
  //printf("head: %d\n", head);
  //sorting the list of request times
  sort(list, count);

  //finding head in the sorted list and setting current equal to the index at head
  while (list[current] != head)
  {
   current++;
   //printf("%d\n", current);
  }

  //saving the index of head in the sorted array before modifying current
  headIndex = current;
  printf("headIndex should be 15: %d\n", headIndex);

  //keeping a running sum of the absolute value of head minus the item after head etc.
  while (current < count - 1)
  {
    seek += abs(list[current] - list[current + 1]);
    current++;
  }
//  printf("current should be 19: %d\n", current);
//  printf("seek should be 26: %d\n", seek);
  //finding the difference between the last item in the list and the item right before head
  //adding the difference to the total seek time
  seek += abs(list[current] - list[headIndex - 1]);
  //setting our current index to one item before head
  current = headIndex - 1;
//  printf("seek should be 61: %d\n", seek);
//  printf("current should be 14: %d\n", current);

  //adding the difference between the item before head and the item before that to total seek time
  //etc...
  while (current > 0)
  {
    seek += abs(list[current] - list[current - 1]);
    current--;
//    printf("seek: %d, current: %d\n", seek, current);
  }

  //printing the result
  printf("LOOK Total Seek: %d\n", seek);

}
