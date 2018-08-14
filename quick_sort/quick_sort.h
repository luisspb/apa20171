// Merge Sort Class Header

#ifndef QUICK_SORT_
# define QUICK_SORT_

# include <vector>

namespace Sort {
   void quick (std::vector<int>& v, unsigned l, unsigned r);
   unsigned partition (std::vector<int>& v, unsigned l, unsigned r);
}

#endif
