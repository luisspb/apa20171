// Insertion Sort Methods Implementation

void InsertionSort::sort (std::vector<unsigned int>& v) {
   unsigned int sorted;
   unsigned int vsize;
   unsigned int i, aux;

   vsize = v.size();

   for (sorted = 0; sorted < vsize; sorted++) {
      aux = v[sorted+1];
      for (i = sorted; (i >= 0) && (aux < v[i]); i--) {
        v[i+1] = v[i];
      }
      v[i+1] = aux;
   }
}
