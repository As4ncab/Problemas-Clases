/**
 * @file books_main.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 *
 * @brief Programa Principal
 *
 *        Escriba un programa books.cc que defina una clase Book. Esta clase
 *        debe permitir almacenar las características de un libro: título, año
 *        de publicación y precio. También debe poseer un método que permita
 *        calcular el precio del libro con impuestos.
 *
 *        Una vez definida la clase, implemente una función principal donde
 *        instancie varios libros. Muestre el precio de todos los libros creados
 *        considerando un porcentaje de impuestos pasados desde la línea de
 *        comandos.
 *
 * @version 0.1
 * @date 2023-07-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "books.h"

int main(int argc, char* argv[]) {
  if (!CheckCorrectParams(argc, 2)) {
    Usage(argv);

    return EXIT_FAILURE;
  }

  ProgramPurpose();

  int tax{argv[1] - '0'};
  Books quijote{"El quijote de la Mancha", 1605, 21.0};
  Books lazarillo;
  Books pilares;

  // Sin impuestos
  std::cout << "Libros sin impuestos:" << std::endl;
  std::cout << "  " << quijote << std::endl;
  std::cout << "  " << lazarillo << std::endl;
  std::cout << "  " << pilares << std::endl;

  // Con impuestos
  quijote.TaxedPrice(tax);
  lazarillo.TaxedPrice(tax);
  pilares.TaxedPrice(tax);

  std::cout << "Libros con impuestos:" << std::endl;
  std::cout << "  " << quijote << std::endl;
  std::cout << "  " << lazarillo << std::endl;
  std::cout << "  " << pilares << std::endl;

  return 0;
}