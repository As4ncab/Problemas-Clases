/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica 2020-2021
 *
 * @file caja_main.cc
 * @author S4yuM4ng0    (s4yum4ng0@random.com)
 * @date Jun 24 2021
 *
 * @brief Given the title, year of release and price of a book, the program
 *        computes its price with a certain percentage of tax applied and prints
 *        the specifications of the books.
 *
 * @bug There are no known bugs
 */

#include "books.h"
#include "tools.h"

///< Client program
int main(int argc, char* argv[]) {
  ///< Verification of suficient amount of parameters in program call
  if (!CheckCorrectParameters(argc, argv, 2)) exit(EXIT_SUCCESS);
  ///< Initial values
  double tax{std::stod(argv[1])};
  Books quijote{"El Quijote de La Mancha", 1605, 21.00};
  Books lazarillo{"El lazarillo de Tormes", 1554, 18.00};
  Books pilares{"Los pilares de la Tierra", 1989, 27.00};
  PrintProgramPurpose();
  std::cout << "Book 1:\n  " << quijote << "\nBook 2:\n  " << lazarillo
            << "\nBook 3:\n  " << pilares << std::endl;
  ///< Tax included
  quijote.TaxedPrice(tax);
  lazarillo.TaxedPrice(tax);
  pilares.TaxedPrice(tax);
  std::cout << "Books with taxed price:\nBook 1:\n  " << quijote
            << "\nBook 2:\n  " << lazarillo << "\nBook 3:\n  " << pilares
            << std::endl;
  return 0;
}
