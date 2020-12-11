/*
   1// Figura 3.12: GradeBook.cpp
   2// Defini��es de fun��o-membro de GradeBook. Esse arquivo cont�m
   3// implementa��es das fun��es-membro prototipadas em GradeBook.h.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edi��o do Kindle.
   Pedro Filho 11/12/2020
*/

// biblioteca
#include <iostream>
#include "GradeBook2.h"

using namespace std;

   // construtor inicializa cursoNome com a string fornecida pelo argumento
   GradeBook::GradeBook( string nome )
   {
      // chamar a fun��o setNomeCurso para inicializar cursoNome
      setNomeCurso( nome );
   } // fim construtor GradeBook

   // fun��o que configura o nome do curso
   void GradeBook::setNomeCurso( string nome )
   {
      // armazena o nome do curso no objeto
      cursoNome = nome;
   } // fim setNomeCurso

   // fun��o para obter o nome do curso
   string GradeBook::getNomeCurso()
   {
      // retorna o cursoNome do objeto
      return cursoNome;
   } // fim getNomeCurso

   // fun��o para mostrar mensagem de boas vindas
   void GradeBook::displayMessage( )
   {
      // essa instru��o chama getNomeCurso para obter o
      // nome do curso que esse GradeBook representa
      cout<< "Bem vindo ao curso:\n" << getNomeCurso() <<endl;
   } // fim fun��o
