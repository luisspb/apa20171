// Main function

#include "main.h"

int main (int argc, char *argv[]) {
   std::ifstream vectorFileIn;
   std::ofstream vectorFileOut;
   std::vector<int> vec;
   unsigned int i, vecSize;

   if (argc > 1)
      vectorFileIn.open (argv[1]);
   else {
      std::cout << "\nWrong syntax. Use:\n$ ./main ../test_cases/test_file.txt" << std::endl;
      return 1;
   }

   vectorFileIn >> vecSize;

   while (vectorFileIn >> i)
      vec.push_back(i);

   vectorFileIn.close();

#ifdef DEBUG
   // Print it unsorted
   std::cout << "\nThe unsorted vector:" << std::endl;
   for (i = 0; i < vec.size(); i++)
      std::cout << vec[i] << " ";
    std::cout << std::endl;
#else
   std::cout << "\nUnsorted vector read." << std::endl;
#endif

   // Algorithm time measurement - start
   auto start = std::chrono::high_resolution_clock::now();

   // Sort it
#ifdef NONE
   std::cout << "\nNo sorting algorithm selected!" << std::endl;
   std::cout << "Aborting..." << std::endl;
   return 1;
#endif

#ifdef SELECTION
   std::cout << "\nSelection sorting selected." << std::endl;
   Sort::selection(vec);
#endif

#ifdef INSERTION
   std::cout << "\nInsertion sorting selected." << std::endl;
   Sort::insertion(vec);
#endif

#ifdef MERGE
   std::cout << "\nMerge sorting selected." << std::endl;
   Sort::mergeSort(vec, 0, vec.size()-1);
#endif

#ifdef QUICK
   std::cout << "\nQuick sorting selected." << std::endl;
   Sort::quick(vec, 0, vec.size()-1);
#endif

   // Algorithm time measurement - end
   auto end = std::chrono::high_resolution_clock::now();

   // Output the sorted vector to a file
   vectorFileOut.open ("vectorOut.txt");
   for (i = 0; i < vec.size(); i++)
      vectorFileOut << vec[i] << " ";
   vectorFileOut << std::endl;

#ifdef DEBUG
   // Print it sorted
   std::cout << "\nThe sorted vector:" << std::endl;
   for (i = 0; i < vec.size(); i++)
      std::cout << vec[i] << " ";
   std::cout << std::endl;
#else
   std::cout << "\nSorted vector wrote." << std::endl;
#endif

   // Print runtime measurement
   std::cout << "\nRuntime: ";
   auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
   if (duration)
      std::cout << duration << " s " << std::endl;
   else {
      duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
      if (duration)
         std::cout << duration << " ms " << std::endl;
      else {
         duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
         std::cout << duration << " ns " << std::endl;
      }
   }

   return 0;
}
