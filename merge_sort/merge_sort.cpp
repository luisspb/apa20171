// Merge Sort Method Implementation

#include "merge_sort.h"

void Sort::mergeSort (std::vector<long>& v, unsigned l, unsigned r) {
   unsigned middle;

   if (r > l) {
      middle = (r + l) / 2;
      mergeSort (v, l, middle);
      mergeSort (v, middle+1, r);
      merge (v, l, middle, r);
   }
}

void Sort::merge (std::vector<long>& v, unsigned l, unsigned m, unsigned r) {
   std::vector<long> left, right;
   unsigned i = 0, j = 0, k;

   // Create left vector
   for (k = l; k <= m; k++)
      left.push_back (v[k]);
   left.push_back (LONG_MAX);
   // Create right vector
   for (k = m+1; k <= r; k++)
      right.push_back (v[k]);
   right.push_back (LONG_MAX);

   // Merge algorithm
   for (k = l; k <= r; k++)
      if (left[i] < right[j]) {
         v[k] = left[i];
	 i++;
      }
      else {
         v[k] = right[j];
	 j++;
      }
}

