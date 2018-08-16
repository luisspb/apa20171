// Merge Sort Method Implementation

#include "quick_sort.h"

void Sort::quick (std::vector<long>& v, unsigned l, unsigned r) {
   unsigned pi;  // Pivot index

   if (r > l) {
      pi = partition (v, l, r);
      quick (v, l, pi);
      quick (v, pi+1, r);
   }
}

unsigned Sort::partition (std::vector<long>& v, unsigned l, unsigned h) {
   long pivot, swap;
   unsigned i, j;

   pivot = v[l];
   i = l;

   for (j = l+1; j <= h; j++)
      if (v[j] < pivot) {
         i++;
         swap = v[i];
         v[i] = v[j];
	 v[j] = swap;
      }
   v[l] = v[i];
   v[i] = pivot;

   return i;
}

