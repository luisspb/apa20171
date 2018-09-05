// Counting Sort Method Implementation

#include "counting_sort.h"

void Sort::counting (std::vector<long>& v) {
   long min, max;
   std::vector<unsigned> countVec;
   std::vector<long> origV(v);

   // Find the minimum and maximum values
   min = v[0];
   max = v[0];
   for (unsigned i = 1; i < v.size(); i++) {
      if (min > v[i])
         min = v[i];
      else if (max < v[i])
         max = v[i];
   }

   // Allocate the array with the range between min and max values
   countVec.resize(max - min + 1);

   // Ensure counting vector starts with all elements equal to zero
   for (unsigned i = 0; i < countVec.size(); i++)
      countVec[i] = 0;

   // Count the elements in the vector
   for (unsigned i = 0; i < v.size(); i++)
      countVec[v[i] - min]++;

   // Accumulate the counting vector
   for (unsigned i = 1; i < countVec.size(); i++)
      countVec[i] += countVec[i - 1];

   // Ordering of the original vector
   for (int i = v.size() - 1; i >= 0; i--) {
      countVec[origV[i] - min]--;
      v[countVec[origV[i] - min]] = origV[i];
   }
}
