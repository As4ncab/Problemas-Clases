/**
 * @file books.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 *
 * @brief Implementación clase Books
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

// Constructores
/**
 * @brief Constructor de copia
 *
 * @param title
 * @param year
 * @param price
 */
Books::Books(std::string title, int year, double price) {
  title_ = title;
  year_of_publish_ = year;
  price_ = price;
}

// Getters
/**
 * @brief Devuelve el título del libro
 *
 * @return std::string
 */
std::string Books::GetTitle() const { return title_; }

/**
 * @brief Devuelve el año de publicación del libro
 *
 * @return int
 */
int Books::GetYear() const { return year_of_publish_; }

/**
 * @brief Devuelve el precio del libro
 *
 * @return double
 */
double Books::GetPrice() const { return price_; }

/**
 * @brief Devuelve el precio del libro con impuestos
 *
 * @return double
 */
double Books::GetTaxedPrice() const { return taxed_price_; }

// Setters
/**
 * @brief Atribuye el valor de "title" al título del libro
 *
 * @param title
 */
void Books::SetTitle(const std::string& title) { title_ = title; }

/**
 * @brief Atribuye el valor de "year" al año de publicación del libro
 *
 * @param year
 */
void Books::SetYear(const int& year) { year_of_publish_ = year; }

/**
 * @brief Atribuye el valor de "price" al precio del libro
 *
 * @param price
 */
void Books::SetPrice(const double& price) { price_ = price; }

// Métodos
/**
 * @brief Calcula el precio del libro con un impuesto del "tax"%
 *
 * @param tax
 */
void Books::TaxedPrice(const double& tax) {
  taxed_price_ += (taxed_price_ * (tax / 100));
}

// Sobrecarga de Operadores E/S
/**
 * @brief Sobrecarga del operador de inserción "<<" que imprime por pantalla los
 *        atributos del libro
 *
 * @param os
 * @param book
 * @return std::ostream&
 */
std::ostream& operator<<(std::ostream& os, Books& book) {
  os << book.title_ << ", " << book.year_of_publish_ << ", " << book.price_
     << ", " << book.taxed_price_;

  return os;
}

// Funciones de Información
/**
 * @brief Función que comprueba que se han pasado la cantidad correcta de
 *        parámetros
 *
 * @param argc
 * @param kCorrectParams
 * @return true
 * @return false
 */
bool CheckCorrectParams(int argc, const int kCorrectParams) {
  if (argc == kCorrectParams) {
    return true;
  }

  return false;
}

/**
 * @brief Función que imprime la manera correcta de llamar al programa desde la
 *        terminal
 *
 * @param argv
 */
void Usage(char** argv) {
  std::cout << "Too many/few arguments in program call.\n    Try: " << argv[0]
            << " [TAX (DOUBLE)]\n"
            << std::endl;
}

/**
 * @brief Función que imprime el propósito del programa
 *
 */
void ProgramPurpose() {
  std::cout << "Este programa instancia 3 libros y calcula su precio según un "
               "porcentaje de impuestos.\n"
            << std::endl;
}

// Funciones de Cambio de Tipo
/**
 * @brief Función que cambia valores de tipo char* a int
 * 
 * @param tax 
 * @return int 
 */
int ToIntegrer(std::string tax) {
  int number{0};

  for (long unsigned i{0}; i < tax.size(); i++) {
    number *= 10;
    number += (tax[i] - '0');
  }

  return number;
}
