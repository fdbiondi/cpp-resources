
#include <cstring>
int main() {

  // pointers
  // a pointer stores a memory address (integer number that represents the
  // address)
  int var = 8;
  void *voidPtr = &var;
  int *ptr = &var;

  *ptr = 10; // replace value of var

  return 0;
}
