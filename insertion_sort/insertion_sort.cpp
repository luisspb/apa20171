// Insertion Sort Methods Implementation

#include "insertion_sort.h"

void Sort::insertion (std::vector<long>& v) {
   unsigned int vsize;
   long aux;
   int i;

   vsize = v.size();

   for (unsigned sorted = 0; sorted < vsize-1; sorted++) {
      aux = v[sorted+1];
      for (i = sorted; (i >= 0) && (aux < v[i]); i--)
         v[i+1] = v[i];
      v[i+1] = aux;
   }
}

