/**
 * @file books.h
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 *
 * @brief Librería para clase Books
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

#include <iomanip>
#include <iostream>
#include <string>

class Books {
 public:
  // Constructores
  Books() {}
  Books(std::string, int, double);
  // Destructor
  ~Books() {}

  // Getters & Setters
  std::string GetTitle(void) const;
  int GetYear(void) const;
  double GetPrice(void) const;
  double GetTaxedPrice(void) const;

  void SetTitle(const std::string&);
  void SetYear(const int&);
  void SetPrice(const double&);

  // Métodos
  void TaxedPrice(const double&);

  // Sobrecarga de Operadores E/S
  std::ostream& operator<<(std::ostream&);

 private:
  // Atributos privados de la clase Books
  std::string title_{" - "};
  int year_of_publish_{0};
  double price_{0.0};
  double taxed_price_{price_};
};

// Funciones de Información
bool CheckCorrectParams(int, char*, const int);
void Usage(char*);
void ProgramPurpose(void);