/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica 2020-2021
 *
 * @file tools.cc
 * @author S4yuM4ng0    (s4yum4ng0@random.com)
 * @date Jan 02 2023
 *
 * @brief Library with information functions definitions
 *
 * @bug There are no known bugs
 */

#include "tools.h"

///< Info/Error functions

/**
 * @brief Function that prints the purpose of the program
 *
 */
void PrintProgramPurpose(void) { std::cout << kHelpText << std::endl; }

/**
 * @brief Function that prints they correct way of using the program
 *
 * @param argc
 * @param argv
 */
void Usage(char** argv) {
  std::cout << argv[0] << " -- Book computing program\nUsage: " << argv[0]
            << " [TITLE] [YEAR] [PRICE]\n  TITLE: Title of the book\n  YEAR: "
               "Year that the book was released\n  PRICE: Price of the book"
            << std::endl;
}

/**
 * @brief Function that checks if the program receives a correct amount of
 *        parameters
 *
 * @param argc
 * @param argv
 * @param kCorrectParameters
 * @return true
 * @return false
 */
bool CheckCorrectParameters(const int argc, char** argv,
                            const int kCorrectParameters) {
  if (argc > 1 && std::string(argv[1]) == "--help") {
    Usage(argv);
    return 0;
  }
  if (argc != kCorrectParameters) {
    std::cout << argv[0] << " -- Book computing program\nUsage: " << argv[0]
              << " [TITLE] [YEAR] [PRICE]\nTry " << argv[0]
              << " --help for more information" << std::endl;
    return 0;
  }
  return 1;
}