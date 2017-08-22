// Main function

#include "main.hpp"

int main () {
   std::ifstream vectorFile;
   std::vector<unsigned int> vec;

   vectorFile.open ("../test_cases/vector5.txt");

   while (vectorFile.peek() != EOF)
      vec.push_back(vectorFile.get());

   vectorFile.close();

   // Print it unsorted
   std::cout << "\nThe unsorted vector:" << std::endl;
   for (unsigned int i = 0; i < vec.size(); i++)
      std::cout << vec[i] << " ";
    std::cout << std::endl;

   // Sort it
//#ifdef SELECTION
//   SelectionSort::sort(vec);
//#endif

//#ifdef INSERTION
   InsertionSort::sort(vec);
//#endif

   // Print it sorted
   std::cout << "\nThe sorted vector:" << std::endl;
   for (unsigned int i = 0; i < vec.size(); i++)
      std::cout << vec[i];
   std::cout << std::endl;

   return 0;
}
