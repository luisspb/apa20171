// Merge Sort Class Header

#ifndef MERGE_SORT_
# define MERGE_SORT_

# include <vector>
# include <bits/stdc++.h>

namespace Sort {
   void mergeSort (std::vector<int>& v, unsigned l, unsigned r);
   void merge (std::vector<int>& v, unsigned l, unsigned m, unsigned r);
}

#endif
