// Project 3, Part 3: list running and sleeping processes
// using the crsp() system call.
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  fprintf(1, "name\tpid\tstate\n");
  fprintf(1, "---------------------------\n");
  if (crsp() < 0) {
    fprintf(2, "ps: crsp failed\n");
    exit(1);
  }
  exit(0);
}
