#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error: incorrect number of arguments\n");
        return 1;
    }
    int num_bytes = atoi(argv[1]);
    if (num_bytes < 0) {
        printf("Error: number of bytes must be non-negative\n");
        return 2;
    }
    /*Get the address of the main function*/
    void *main_addr = (void *)main;
    /*Get the opcodes of the main function*/
    unsigned char *opcodes = (unsigned char *)main_addr;
    /*Print the opcodes*/
    for (int i = 0; i < num_bytes; i++) {
        printf("%02x ", opcodes[i]);
    }
    printf("\n");
    return 0;
}
