// Main function

#include "main.hpp"

int main (int argc, char *argv[]) {
   std::ifstream vectorFile;
   std::vector<int> vec;
   unsigned int i;

   if (argc > 1)
      vectorFile.open (argv[1]);
   else {
      std::cout << "\nWrong syntax. Use:\n$ ./main ../test_cases/test_file.txt" << std::endl;
      return 1;
   }

   while (vectorFile >> i)
      vec.push_back(i);

   vectorFile.close();

   // Print it unsorted
   std::cout << "\nThe unsorted vector:" << std::endl;
   for (i = 0; i < vec.size(); i++)
      std::cout << vec[i] << " ";
    std::cout << std::endl;

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

   // Print it sorted
   std::cout << "\nThe sorted vector:" << std::endl;
   for (i = 0; i < vec.size(); i++)
      std::cout << vec[i] << " ";
   std::cout << std::endl;

   return 0;
}
