// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value <= 1) {
        return false;
    }
    if (value == 2) {
        return true;
    }
    int brerak = 0;
    for (uint64_t i = 2; i < value; ++i) {
        if ((value % i) == 0) {
            brerak = 1;
            break;
        }
    }
    if (brerak == 0) {
        return true;
    } else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
    uint64_t k = 0;
    int brerak = 0;
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    } else {
        uint64_t i = 3;
        uint64_t count = 2;
        while (true) {
            i += 1;
            for (uint64_t j = 2; j < i; ++j) {
                if ((i % j) == 0) {
                    brerak = 1;
                    break;
                }
            }
            if (brerak == 0) {
                count += 1;
                if (count == n) {
                    k = i;
                    break;
                }
            }
            brerak = 0;
        }
    }
    return k;
}

uint64_t nextPrime(uint64_t value) {
    int brerak = 0;
    uint64_t i = value;
    while (true) {
        i += 1;
        for (uint64_t j = 2; j < i; ++j) {
            if ((i % j) == 0) {
                brerak = 1;
                break;
            }
        }
        if (brerak == 0) {
            break;
        }
        brerak = 0;
    }
    return i;
}

uint64_t sumPrime(uint64_t hbound) {
    if (hbound <= 2) {
        return 0;
    }
    if (hbound == 3) {
        return 2;
    }
    if (hbound == 4) {
        return 5;
    }
    if (hbound == 5) {
        return 5;
    }
    int brerak = 0;
    uint64_t sum = 5;
    for (uint64_t i = 5; i < hbound; ++i) {
        for (uint64_t j = 2; j < i; ++j) {
            if ((i % j) == 0) {
                brerak = 1;
                break;
            }
        }
        if (brerak == 0) {
            sum += i;
        }
        brerak = 0;
    }
    return sum;
}
