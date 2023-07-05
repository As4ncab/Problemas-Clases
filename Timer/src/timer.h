/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file timer.h
 * @author Alexia Sánchez Cabrera alu0101482323@ull.edu.es
 * @date 2023-07-05
 *
 * @brief Librería de la clase "Timer"
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

#ifndef TIMER_H_
#define TIMER_H_

#include <chrono>
#include <iostream>

template <class T>
class Timer {
 public:
  // Constructores
  Timer() {}
  Timer(auto start_ms, auto end_ms) {
    clock_starting_point_ = start_ms;
    clock_ending_point_ = end_ms;
  }
  // Destructores
  ~Timer() {}

  // Getteres & Setters
  auto get_start(void) const;
	auto get_end(void) const;

  void set_start(const auto);
	void set_end(const auto);

  // Métodos
  void reset(void);
  int elapsed(void);

 private:
  // atributos privados de la clase Timer
  auto clock_starting_point_{0};
  auto clock_ending_point_{0};
};

// Funciones de Información
bool CheckCorrectParams(int, const int);
void Usage(char**);
void ProgramPurpose(void);

// Funciones de programa
bool IsPrime(int&);

#endif