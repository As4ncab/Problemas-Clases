/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica 2020-2021
 *
 * @file books.h
 * @author S4yuM4ng0    (s4yum4ng0@random.com)
 * @date Jan 02 2023
 *
 * @brief Library with class and function declarations
 *
 * @bug There are no known bugs
 */

#ifndef BOOKS_H_
#define BOOKS_H_

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

class Books {
 public:
  ///< Constructors and Destructor
  Books() {}
  Books(const std::string&, const int&, const double&);
  ~Books() {}
  ///< Getters and Setters
  std::string GetTitle(void) const;
  int GetYear(void) const;
  double GetPrice(void) const;
  double GetTaxedPrice(void) const;
  void SetTitle(const std::string&);
  void SetYear(const int&);
  void SetPrice(const double&);
  ///< Methods
  void TaxedPrice(const double&);
  ///< Operator overloadings
  friend std::ostream& operator<<(std::ostream&, Books&);
  friend std::istream& operator>>(std::istream&, Books&);

 private:
  std::string title_{"-"};
  int year_of_release_{0};
  double price_{0.0};
  double taxed_price_{0.0};
};

#endif
