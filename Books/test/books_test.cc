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

#include <vector>

#include "../src/tools.h"
#include "gtest/gtest.h"

namespace {
Books test_book{"a", 23, 21.0};

///< Method TaxedPrice()
TEST(TaxedPrice, TaxedPriceDifferentToPrice) {
  ///< 7% tax
  test_book.TaxedPrice(7);
  EXPECT_EQ(test_book.GetTaxedPrice(), 22.47);
  ///< 15% tax
  test_book.TaxedPrice(15);
  EXPECT_EQ(test_book.GetTaxedPrice(), 24.15);
}

TEST(TaxedPrice, TaxEqualToZero) {
  ///< 0% tax (price unchanged)
  test_book.TaxedPrice(0);
  EXPECT_EQ(test_book.GetTaxedPrice(), test_book.GetPrice());
}

///< Function CheckCorrectParams()
TEST(CorrectParams, CorrectAmountOfParameters) {
  char* argv[]{(char*)"./program", (char*)"param"};
  ///< argc == 2 parameters
  EXPECT_EQ(CheckCorrectParameters(2, argv, 2), true);
}

TEST(CorrectParams, IncorrectAmountOfParameters) {
  char* argv[]{(char*)"./program"};
  char* argv2[]{(char*)"./program", (char*)"param1", (char*)"param2"};
  ///< argc < 2 parameters
  EXPECT_EQ(CheckCorrectParameters(1, argv, 2), 0);
  ///< argc > 2 parameters
  EXPECT_EQ(CheckCorrectParameters(3, argv2, 2), 0);
}
}  // namespace