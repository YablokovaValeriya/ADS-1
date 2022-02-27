// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <=1)
    return false;
  for (int k = 2; k <= (value/2); k++) {
    if ((value % k) == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t s = 0;
  uint64_t k = 0;
  while (k != n) {
    s++;
    if (checkPrime(s))
      k++;
  }
  return s;
}

uint64_t nextPrime(uint64_t value) {
  value++;
    while (checkPrime (value) != true) {
      value++;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
    for (uint64_t k = 2; i < hbound; i++) {
      if (checkPrime(k) == true)
        sum += k;
    }
    return sum;
}
