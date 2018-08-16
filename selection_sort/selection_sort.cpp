// Selection Sort Methods Implementation

#include "selection_sort.h"

void Sort::selection (std::vector<long>& v) {
   unsigned int vsize;
   unsigned int jmin, j;
   long min;

   vsize = v.size();

   for (unsigned i = 0; i < vsize; i++) {
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
