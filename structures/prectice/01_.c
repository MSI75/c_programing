#include <stdio.h>

struct address
{
    int house;
    int block;
    char city[100];
    char state[100];
};

void printAddress(struct address adr);

int main()
{
    /* adr lhm;
    lhm.block = 2012;
    lhm.house = 1075;

    strcpy(lhm.city, "Barisal");
    strcpy(lhm.state, "Barisal city"); */

    struct address lhm = {2012, 1075, "Barisal", "Barisal Chowmath"};
    struct address mm = {2015, 1076, "Barisal", "Barisal Chowmath"};
    struct address jj = {2016, 1077, "Barisal", "Barisal Chowmath"};
    struct address kk = {2017, 1078, "Barisal", "Barisal Chowmath"};
    struct address tt = {2018, 1079, "Barisal", "Barisal Chowmath"};
    printAddress(lhm);
    printAddress(mm);
    printAddress(jj);
    printAddress(kk);
    printAddress(tt);

    return 0;
}

void printAddress(struct address adr)
{
    printf("House %d\n", adr.house);
    printf("Block %d\n", adr.block);
    printf("City %s\n", adr.city);
    printf("State %s\n", adr.state);
    printf("\n");
}
