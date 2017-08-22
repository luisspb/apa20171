// Insertion Sort Methods Implementation

#include "insertion_sort.hpp"

void InsertionSort::sort (std::vector<unsigned int>& v) {
   unsigned int vsize;
   unsigned int i, aux;

   vsize = v.size();

   for (unsigned int sorted = 0; sorted < vsize; sorted++) {
      aux = v[sorted+1];
      for (i = sorted; aux < v[i]; i--) {
        v[i+1] = v[i];
      }
      v[i+1] = aux;
   }
}
