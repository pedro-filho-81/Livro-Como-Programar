/*
   1// Figura 3.3: fig03_03.cpp
   2// Define a classe GradeBook com uma fun��o-membro que aceita um par�metro;
   3// Cria um objeto GradeBook e chama sua fun��o-membro displayMessage.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 61). Edi��o do Kindle.
   Pedro Filho 10/11/2020
*/

// biblioteca
#include <iostream>
#include <string>

using namespace std;

// criar a classe GradeBook
class GradeBook
{
public:
   // construtor inicializa cursoNome com a string fornecida pelo argumento
   GradeBook( string nome )
   {
      // chamar a fun��o setNomeCurso para inicializar cursoNome
      setNomeCurso( nome );
   } // fim construtor GradeBook

   // fun��o que configura o nome do curso
   void setNomeCurso( string nome )
   {
      // armazena o nome do curso no objeto
      cursoNome = nome;
   } // fim setNomeCurso

   // fun��o para obter o nome do curso
   string getNomeCurso()
   {
      // retorna o cursoNome do objeto
      return cursoNome;
   } // fim getNomeCurso

   // fun��o para mostrar mensagem de boas vindas
   void displayMessage( string nomeCurso )
   {
      // essa instru��o chama getNomeCurso para obter o
      // nome do curso que esse GradeBook representa
      cout<< "Bem vindo ao curso:\n" << getNomeCurso() <<endl;
   } // fim fun��o

private:
   string cursoNome; // vari�vel nome do curso para esse GradeBook

}; // fim classe grade_book

