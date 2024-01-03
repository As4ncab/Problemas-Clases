/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica 2020-2021
 *
 * @file books.cc
 * @author S4yuM4ng0    (s4yum4ng0@random.com)
 * @date Jan 02 2023
 *
 * @brief Library with class and function definitions
 *
 * @bug There are no known bugs
 */

#include "books.h"

///< Class Books
///< Constructores

/**
 * @brief Construct a new Books::Books object
 *
 * @param title
 * @param year
 * @param price
 */
Books::Books(const std::string& title, const int& year, const double& price) {
  title_ = title;
  year_of_release_ = year;
  price_ = price;
  taxed_price_ = price;
}

///< Getters

/**
 * @brief Returns the title of the book
 *
 * @return std::string
 */
std::string Books::GetTitle() const { return title_; }

/**
 * @brief Returns the year that the book was released
 *
 * @return int
 */
int Books::GetYear() const { return year_of_release_; }

/**
 * @brief Returns the price of the book
 *
 * @return double
 */
double Books::GetPrice() const { return price_; }

/**
 * @brief Returns the price of the book with a tax applied (initialy 0%)
 *
 * @return double
 */
double Books::GetTaxedPrice() const { return taxed_price_; }

///< Setters

/**
 * @brief Gives the value "title" as the title of the book
 *
 * @param title
 */
void Books::SetTitle(const std::string& title) { title_ = title; }

/**
 * @brief Gives the value "year" as the year of release of the book
 *
 * @param year
 */
void Books::SetYear(const int& year) { year_of_release_ = year; }

/**
 * @brief Gives the value "price" as the price of the book
 *
 * @param price
 */
void Books::SetPrice(const double& price) { price_ = price; }

///< Methods

/**
 * @brief Computes the taxed price of the book with a "tax"% applied
 *
 * @param tax
 */
void Books::TaxedPrice(const double& tax) {
  taxed_price_ = price_ + (price_ * (tax / 100));
}

///< I/O operator overloadings

/**
 * @brief Operator "<<" overloading for printing Books objects
 *
 * @param os
 * @param book
 * @return std::ostream&
 */
std::ostream& operator<<(std::ostream& os, Books& book) {
  os << book.title_ << ", " << book.year_of_release_ << ", " << std::fixed
     << std::setprecision(2) << book.price_ << "€, " << std::fixed
     << std::setprecision(2) << book.taxed_price_ << "€";
  return os;
}

/**
 * @brief Operator ">>" overloading for initialising Books objects with the data
 *        introduced by the user
 *
 * @param is
 * @param book
 * @return std::istream&
 */
std::istream& operator>>(std::istream& is, Books& book) {
  is >> book.title_ >> book.year_of_release_ >> book.price_;
  book.taxed_price_ = book.price_;
  return is;
}
