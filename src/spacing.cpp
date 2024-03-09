// Copyright 2024 Rodrigo Moraes

#include "../include/spacing.h"


std::vector<double> arange(double start, double stop, double step) {
    double sum = start;
    std::vector<double> spacedVector;

    while (sum < stop) {
        spacedVector.emplace_back(sum);
        sum += step;
    }

    return spacedVector;
}


std::vector<double> linspace(double start, double stop, int num) {
    double res;
    double sum = start;
    std::vector<double> spacedVector;

    res = (stop - start) / (num - 1);

    spacedVector.insert(spacedVector.begin(), start);

    int i = 0;
    while (i < num - 1) {
        sum += res;
        spacedVector.emplace_back(sum);
        i++;
    }

    return spacedVector;
}
