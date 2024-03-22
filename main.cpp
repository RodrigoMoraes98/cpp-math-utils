// Copyright 2024 Rodrigo Moraes

#include <iostream>
#include "include/spacing.h"

int main(void) {
    std::vector<double> vec;

    vec = arange(0.21, 13.4545, 0.866);

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
