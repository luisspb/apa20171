// Selection Sort Methods Implementation

#include "selection_sort.hpp"

void SelectionSort::sort (std::vector<unsigned int>& v) {
   unsigned int vsize;
   unsigned int min;

   vsize = v.size();

   for (unsigned int i = 0; i < vsize; i++) {
      min = v[i];
      for (unsigned int j = i; j < vsize; j++)
         if (v[j] < min)
            min = v[j];
      v[i] = min;
   }
}
