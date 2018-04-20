// Author: Jordan Carter
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

  //finding the difference between the last item in the list and the item right before head
  //adding the difference to the total seek time
  seek += abs(list[current] - list[headIndex - 1]);
  //setting our current index to one item before head
  current = headIndex - 1;

  //adding the difference between the item before head and the item before that to total seek time
  //etc...
  while (current > 0)
  {
    seek += abs(list[current] - list[current - 1]);
    current--;
  }

  //printing the result
  printf("LOOK Total Seek: %d\n", seek);

}
