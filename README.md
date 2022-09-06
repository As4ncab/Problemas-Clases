# Problemas Clases

## Descripción
Repositorio que contiene los ejercicios resueltos referentes a la hoja 4 de problemas de la asignatura Informática Básica.

## Enunciados
1. Escriba un programa books.cc que defina una clase Book. Esta clase debe permitir almacenar las características de un libro: título, año de publicación y precio. También debe poseer un método que permita calcular el precio del libro con impuestos. 
Una vez definida la clase, implemente una función principal donde instancie varios libros. Muestre el precio de todos los libros creados considerando un porcentaje de impuestos pasados desde la línea de comandos.

            $ ./books 7
            El quijote de la Mancha, 1605, 21.0, 22.47
            El lazarillo de Tormes, 1554, 18.0, 19.26
            Los pilares de la Tierra, 1989, 27.0, 28.89

            $ ./books 15
            El quijote de la Mancha, 1605, 21.0, 24.15
            El lazarillo de Tormes, 1554, 18.0, 20.7
            Los pilares de la Tierra, 1989, 27.0, 31.05


2. Escriba un programa complex_numbers.cc que defina una clase ComplexNumber. Esta clase debe permitir almacenar las características de un número complejo (a + bi) y realizar operaciones aritméticas básicas (suma, resta, multiplicación y división).
Una vez definida la clase, implemente una función principal donde instancie varios números complejos y realice las operaciones aritméticas sobre ellos.

            $ ./complex_numbers
            Numbers: (68.04, 0.00) (56.62, -21.12) 
            Sum: (124.66, -21.12) 
            Subtraction: (11.42, 21.12) 
            Multiplication: (3852.28, -1437.19) 
            Division: (1.05, -0.39)


3. Escriba un programa cars.cc que defina una clase Car. Esta clase debe permitir almacenar las características de un coche: marca, modelo, tipo de vehículo (todoterreno, berlina, coupé, etc.) y precio.
Una vez definida la clase, implemente una función principal donde instancie el número de coches indicado por el usuario desde la línea de comandos. Luego muestre el precio del coche más caro de cada tipo.

            $ ./cars 5
            Cars of type 'todoterreno':

            Cars of type 'coupe':
            Mercedes, model2, coupe, 48875
            The most expensive car costs 48875

            Cars of type 'utilitario':
            Mercedes, model5, utilitario, 50325.1
            Opel, model2, utilitario, 42185.8
            Toyota, mode1, utilitario, 41134.5
            The most expensive car costs 50325

            Cars of type 'monovolumen':
            Toyota, model2, monovolumen, 55977.4
            The most expensive car costs 55977

            Cars of type 'roadster':


4. Escriba un programa chess_pieces.cc que defina una clase ChessPiece. Esta clase debe permitir almacenar las características de una pieza de ajedrez: tipo de pieza, color de pieza y posición en el tablero.
Una vez definida la clase, implemente una función principal donde instancie las piezas de ajedrez indicadas por línea de comandos ubicadas aleatoriamente en un tablero. Compruebe que en cada posición del tablero existe una única pieza. Si no es así reubíquelas hasta que se encuentren bien colocadas.

            $ ./chess_pieces 4
            bishop white, row=6, column=6
            king black, row=2, column=6
            rook black, row=3, column=5
            knight black, row=7, column=7
            All the pieces are in different positions.

            $ ./chess_pieces 4
            bishop white, row=6, column=6
            king black, row=2, column=6
            rook black, row=3, column=5
            knight black, row=2, column=6
            Several pieces are in the same position. We are going to relocate them:

            bishop white, row=2, column=4
            king black, row=3, column=1
            rook black, row=6, column=7
            knight black, row=7, column=5
            All the pieces are in different positions.


5. Desarrolle una clase Timer que permita tomar medidas del tiempo de ejecución que consume un determinado fragmento de código. Un programa que utilice esta clase podría tener sentencias como las que siguen a continuación, que se utilizan para medir cuánto tiempo consume la función IsPrime() al ser invocada dentro del bucle.

            Timer timer;  // Declaración de un objeto Timer
            long prime_counter{0};

            std::cout << "Exploring prime numbers up to " << limit << std::endl;
            timer.reset();
            for(int number{2}; number <= limit; ++number) {
              if (IsPrime(number)) {
                ++prime_counter;
              }   
            }
            std::cout << "Elapsed time: " << timer.elapsed() << "ms" << std::endl;
            std::cout << "Number of primes: " << prime_counter << std::endl;

Como se observa en el código anterior, el método Reset() de la clase Timer reinicia el contador (timer) mientras que el método Elapsed() entrega la cantidad de milisegundos transcurridos desde que se inicializó el cronómetro.
Para desarrollar esta clase resulta conveniente estudiar la documentación y ejemplos de uso de la clase:

            std::chrono::duration