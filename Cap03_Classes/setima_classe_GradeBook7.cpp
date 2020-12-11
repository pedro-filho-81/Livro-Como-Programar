/*
   1// Figura 3.13: fig03_13.cpp
   2// Demonstra��o de classe GradeBook depois de separar
   3// sua interface de sua implementa��o.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 76). Edi��o do Kindle.
   Pedro Filho 11/12/2020
*/

// bibliotecas
#include <iostream>

// incluir a defini��o de classe
#include "GradeBook.h"

// fun��o principal
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
