// Main function

#include "main.hpp"

int main (int argc, char *argv[]) {
   std::ifstream vectorFile;
   std::vector<unsigned int> vec;

   if (argc > 1)
      vectorFile.open (argv[1]);
   else {
      std::cout << "\nWrong syntax. Use:\n$ main test_cases/test.txt" << std::endl;
      return 1;
   }

   while (vectorFile.peek() != EOF)
      vec.push_back(vectorFile.get());

   vectorFile.close();

   // Print it unsorted
   std::cout << "\nThe unsorted vector:" << std::endl;
   for (unsigned int i = 0; i < vec.size(); i++)
      std::cout << vec[i] << " ";
    std::cout << std::endl;

   // Sort it
#ifdef SELECTION
   Sort::selection(vec);
#endif

#ifdef INSERTION
   Sort::insertion(vec);
#endif

   // Print it sorted
   std::cout << "\nThe sorted vector:" << std::endl;
   for (unsigned int i = 0; i < vec.size(); i++)
      std::cout << vec[i];
   std::cout << std::endl;

   return 0;
}
