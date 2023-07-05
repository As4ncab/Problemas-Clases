/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file timer.cc
 * @author Alexia Sánchez Cabrera alu0101482323@ull.edu.es
 * @date 2023-07-05
 *
 * @brief Implementación de la clase "Timer"
 *
 * 				Desarrolle una clase Timer que permita tomar
 * 				medidas del tiempo de ejecución que consume un
 * 				determinado fragmento de código. Un programa que
 * 				utilice esta clase podría tener sentencias como
 * 				las que siguen a continuación, que se utilizan
 * 				para medir cuánto tiempo consume la función
 * 				IsPrime() al ser invocada dentro del bucle.
 *
 * 				Como se observa en el código anterior, el método
 * 				Reset() de la clase Timer reinicia el contador
 * 				(timer) mientras que el método Elapsed() entrega
 * 				la cantidad de milisegundos transcurridos desde
 * 				que se inicializó el cronómetro.
 *
 * 				Para desarrollar esta clase resulta conveniente
 * 				estudiar la documentación y ejemplos de uso de
 * 				la clase: std::chrono::duration
 *
 * @version 0.1
 * @bug There are no known bugs
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "timer.h"

// Getters
/**
 * @brief Devuelve el valor del atributo privado de la clase Timer
 *
 * @return auto
 */
auto Timer::get_start() const { return clock_starting_point_; }

/**
 * @brief Devuelve el valor del atributo privado de la clase Timer
 *
 * @return auto
 */
auto Timer::get_end() const { return clock_ending_point_; }

// Setter
/**
 * @brief Atribuye el valor de ms al atributo privado de la clase Timer
 *
 * @param ms
 */
void Timer::set_start(const auto ms) { clock_starting_point_ = ms; }

/**
 * @brief Atribuye el valor de ms al atributo privado de la clase Timer
 *
 * @param ms
 */
void Timer::set_end(const auto ms) { clock_ending_point_ = ms; }

// Métodos
/**
 * @brief Reinicicia el contador a 0
 *
 */
void Timer::reset() {
  clock_starting_point_ = std::chrono::steady_clock::now();
  clock_ending_point_ = clock_starting_point_;
}

/**
 * @brief Método que calcula el tiempo que tarda en ejecutarse un proceso (en
 *        milisegundos)
 *
 * @return auto
 */
auto Timer::elapsed() {
  set_end(std::chrono::steady_clock::now());

  return std::chrono::duration_cast<std::chrono::milliseconds>(
             clock_ending_point_ - clock_starting_point_)
      .count();
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
            << "\n"
            << std::endl;
}

/**
 * @brief Función que imprime el propósito del programa
 *
 */
void ProgramPurpose() {
  std::cout << "Este programa imprime por pantalla lo que tarda en ejecutarse "
               "un proceso en milisegundos.\n"
            << std::endl;
}

// Funciones de Programa
bool IsPrime(int& number) {
  int counter{0};

  for (int i{1}; i <= number; i++) {
    if ((number % i) == 0) {
      counter++;
    }
  }

  if (counter == 2) {
    return true;
  }

  return false;
}