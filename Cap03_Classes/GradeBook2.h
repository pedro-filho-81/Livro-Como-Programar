/*
   Figura 3.11: GradeBook.h
   2// Defini��o da classe GradeBook.
   Esse arquivo apresenta a interface p�blica de
   3// GradeBook sem revelar as implementa��es de fun��es-membro de GradeBook
   4// que s�o definidas em GradeBook.cpp.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edi��o do Kindle.
   Pedro Filho 11/12/2020
*/
#include <string>
using namespace std;

class GradeBook
{
public:
   GradeBook( string ); // construtor que inicializa crusoNome
   void setNomeCurso( string ); // fun��o para configurar o nome do curso
   string getNomeCurso(); // fun��o que obtem o nome do curso
   void displayMessage(); // fun��o que exibe a mensagem de boas vindas
private:
   string cursoNome;
}; // fim da classe GradeBook
