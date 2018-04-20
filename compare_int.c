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

int compare_int(const void* a, const void* b)
{
  if (*(int*)a == *(int*)b) return 0;
  return *(int*)a < *(int*)b ? -1 : 1;
}

