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

void Books::SetTitle(const std::string& title) {
  title_
}