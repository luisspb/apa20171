// Selection Sort Methods Implementation

#include "selection_sort.hpp"

void Sort::selection (std::vector<unsigned int>& v) {
   unsigned int vsize;
   unsigned int min, jmin, j;

   vsize = v.size();

   for (unsigned int i = 0; i < vsize; i++) {
      min = v[i];
      jmin = i;
      for (j = i; j < vsize; j++)
         if (v[j] < min) {
            min = v[j];
            jmin = j;
         }
      v[jmin] = v[i];
      v[i] = min;
   }
}
