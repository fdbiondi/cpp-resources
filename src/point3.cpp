int main() {
    // pointer of pointer

    char *buffer = new char[8]; // saves 8 bytes of memory and returns the address
    char **bufferPtr = &buffer; // sets it to the memory address of the buffer
    //
    // a 32bits app stores blocks for memory address of 4bytes (32bits)
    // e.g.: 00 02 ff b2 (mem address of 32bits)
    //
    int example[5]; // created on the stack mem
    int *another =
      new int[5]; // created on the heap mem -> so must be manually deleted
    delete[] another;

    return 0;
}
