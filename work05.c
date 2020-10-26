// Serena Chan
// Systems Level Programming
// 10/09/2020
// Work 05: That way madness lies

#include <stdio.h>

int main(){
    
    // declare and initialize variables of type int, char, long
    char c = 'c';
    int i = 17;
    long l = 300;
    
    // hex representation of memory address
    printf("c: %p\n", &c);
    printf("i: %p\n", &i);
    printf("l: %p\n", &l);
    
    // decimal representation
    printf("c: %d\n", (int) &c);
    printf("i: %d\n", (int) &i);
    printf("l: %d\n", (int) &l);
    
    // c is 7 bytes higher than i, l is 8 bytes lower than i
    
    // declare and initialize pointers
    char *cp = &c;
    int *ip = &i;
    long *lp = &l;
    
    // print pointer values
    printf("cp: %c\n", *cp);
    printf("ip: %d\n", *ip);
    printf("lp: %ld\n\n", *lp);
    
    // modify original variables using pointers
    (*cp)++;
    (*ip)--;
    (*lp)--;
    
    // prints modified values (mod)
    printf("c mod: %c\n", c);
    printf("i mod: %d\n", i);
    printf("l mod: %ld\n\n", l);
    
    // declare and initialize unsigned int variable and 2 pointers
    unsigned int ui = 999;
    int *uip = &ui;
    char *cui = &ui;
    
    // print value (memory address) of each pointer
    printf("p: %p p points to: %d\n", uip, *uip);
    printf("p: %p p points to: %c\n\n", cui, *cui);

    // print unsigned int in decimal and hex
    printf("ui hex: %x\n", ui);
    printf("ui decimal: %u\n\n", ui);
    
    // print out each individual byte of unsigned int
    int x;
    for (x = 0; x < 4; x++){
        printf("byte %d: %hhu\n", x, *(cui + x));
    }
    
    // increment each byte of the unsigned int by 1
    for (x = 0; x < 4; x++){
        (*cui)++;
        printf("byte %d: %hhu\t%hhx\n", x, *cui, *cui);
        cui++;
    }
    
    // increment each byte of the unsigned int by 16
    for (x = 0; x < 4; x++){
        *(cui + x) = *(cui + x) + 16;
        printf("unsigned int value in hex: %x\n",ui);
        printf("unsigned int value in dec: %u\n\n",ui);
    }

    return 0;
    
    
}
