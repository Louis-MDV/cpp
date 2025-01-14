#include "iter.hpp"

int    addone(int i) {
    return (i + 1);
}

void    printab(int tab[], int len) {
    for(int i = 0; i < len; ++i){ 
        std::cout << tab[i] << std::endl;
    }
}

int main(void) {

    int tab[5] = {1, 2, 3, 4, 5};

    iter(tab, 5, addone);
    printab(tab, 5);
}
