/*
   1// Figura 3.10: fig03_10.cpp
   2// Incluindo a classe GradeBook a partir do arquivo Gradebook.h para uso em main.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 72). Edição do Kindle.
   Pedro Filho 11/12/2020
*/

// bibliotecas
#include <iostream>

// incluir a definição de classe
#include "GradeBook.h"

// função principal
int main()
{
   // criando dois objetos da classe GradeBook chamado meuGradeBook
   GradeBook meuGradeBook1( "C++ Como Programar.\n" );
   GradeBook meuGradeBook2( "Estrutura de dados em C++.\n" );

   // exibe o valor inicial de cursoNome para cada GradeBook
   cout<< "GradeBook meuGradeBook1: " << meuGradeBook1.getNomeCurso()
      << "GradeBook meuGradeBook2: " << meuGradeBook2.getNomeCurso()
      << endl;

   // fim do programa
   return 0;

} // fim main
