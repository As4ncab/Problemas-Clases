/**
 * @file books_test.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 *
 * @brief Tests unitarios para los métodos de la clase Books y demás funciones.
 *
 * @version 0.1
 * @date 2023-07-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "../src/books.h"

#include "gtest/gtest.h"

namespace {
Books test_book{"a", 23, 21.0};

// Método TaxedPrice()
TEST(TaxedPrice, TaxedPriceDifferentToPrice) {
  // Impuesto del 7%
  test_book.TaxedPrice(7);
  EXPECT_EQ(test_book.GetTaxedPrice(), 22.47);

  // Impuesto del 15%
  test_book.TaxedPrice(15);
  EXPECT_EQ(test_book.GetTaxedPrice(), 24.15);
}

TEST(TaxedPrice, TaxEqualToZero) {
  // Impuesto del 0% (precio se mantiene)
  test_book.TaxedPrice(0);
  EXPECT_EQ(test_book.GetTaxedPrice(), test_book.GetPrice());
}

// Función CheckCorrectParams()
TEST(CorrectParams, CorrectAmountOfParameters) {
  // argc == 2 parámetros
  EXPECT_EQ(CheckCorrectParams(2, 2), true);
}

TEST(CorrectParams, IncorrectAmountOfParameters) {
  // argc < 2 parámetros
  EXPECT_EQ(CheckCorrectParams(1, 2), 0);

  // argc > 2 parámetros
  EXPECT_EQ(CheckCorrectParams(3, 2), 0);
}

// Función ToIntegrer
TEST(ToInt, ConverToIntegrer) {
  EXPECT_EQ(ToIntegrer("7"), 7);
  EXPECT_EQ(ToIntegrer("15"), 15);
  EXPECT_EQ(ToIntegrer("512"), 512);
  EXPECT_EQ(ToIntegrer("1000000"), 1000000);
}

TEST(ToInt, ConvertToIntegererWithLetters) {
  EXPECT_EQ(ToIntegrer("7aaaaaaaaaaaaa"), 7);
  EXPECT_EQ(ToIntegrer("70eeee3rrr0"), 7030);
  EXPECT_EQ(ToIntegrer(""), 0);
  EXPECT_EQ(ToIntegrer("745fdsjgvnj@#~$%$&4342"), 7454342);
}
}  // namespace