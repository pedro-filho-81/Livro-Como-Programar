/*
   1// Figura 3.12: GradeBook.cpp
   2// Definições de função-membro de GradeBook. Esse arquivo contém
   3// implementações das funções-membro prototipadas em GradeBook.h.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edição do Kindle.
   Pedro Filho 11/12/2020
*/

// biblioteca
#include <iostream>
#include "GradeBook2.h"

using namespace std;

   // construtor inicializa cursoNome com a string fornecida pelo argumento
   GradeBook::GradeBook( string nome )
   {
      // chamar a função setNomeCurso para inicializar cursoNome
      setNomeCurso( nome );
   } // fim construtor GradeBook

   // função que configura o nome do curso
   void GradeBook::setNomeCurso( string nome )
   {
      // armazena o nome do curso no objeto
      cursoNome = nome;
   } // fim setNomeCurso

   // função para obter o nome do curso
   string GradeBook::getNomeCurso()
   {
      // retorna o cursoNome do objeto
      return cursoNome;
   } // fim getNomeCurso

   // função para mostrar mensagem de boas vindas
   void GradeBook::displayMessage( )
   {
      // essa instrução chama getNomeCurso para obter o
      // nome do curso que esse GradeBook representa
      cout<< "Bem vindo ao curso:\n" << getNomeCurso() <<endl;
   } // fim função
