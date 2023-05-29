#include <iostream>

int main() {
    char* buffer = new char[8]; // saves 8 bytes of memory and returns the
                                // address of the begining of the char chain
    std::memset(buffer, 0, 8);

    delete[] buffer; // delete data inside of the pointer (buffer)

    return 0;
}
