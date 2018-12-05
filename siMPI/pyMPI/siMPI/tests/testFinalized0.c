
/*TEST
PATH='tests/testFinalized0.c'
CCFLAGS=""
INPUT=""
OUTPUT='flag = 1\n'
STATUS=0
TEST*/

/******************************************************************/
/* FILE  ***********     testFinalized0.c      ********************/
/******************************************************************/
/* Author : Lisa ALano July 25 2002                                */
/* Copyright (c) 2002 University of California Regents            */
/******************************************************************/
/******************************************************************/

#if 0
CCFLAGS = None  
ARGS = None
INPUT = EOF 
OUTPUT = flag = 1 
STATUS = 0 
#endif


#include "mpi.h"

int main(int argc, char**argv) 
{
  int flag;
  MPI_Init(&argc, &argv);
  MPI_Finalize();
  MPI_Finalized(&flag);
  printf ("flag = %d\n",flag);
  return 0;
}
