// Counting Sort Method Implementation

#include "counting_sort.h"

void Sort::counting (std::vector<long>& v) {
   int min, max;

   // Find the minimum and maximum values
   min = v[0];
   max = v[0];
   for (unsigned i = 1; i < v.size(); i++) {
      if (min > v[i])
         min = v[i];
      else if (max < v[i])
         max = v[i];
   }

   std::cout << "\nmin = " << min << "\nmax = " << max << std::endl;

}
