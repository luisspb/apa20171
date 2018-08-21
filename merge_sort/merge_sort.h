// Merge Sort Class Header

#ifndef MERGE_SORT_
# define MERGE_SORT_

# include <vector>
# include <climits>

namespace Sort {
   void mergeSort (std::vector<long>& v, unsigned l, unsigned r);
   void merge (std::vector<long>& v, unsigned l, unsigned m, unsigned r);
}

#endif
