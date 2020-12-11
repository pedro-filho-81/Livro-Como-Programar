/*
   Figura 3.11: GradeBook.h
   2// Definição da classe GradeBook.
   Esse arquivo apresenta a interface pública de
   3// GradeBook sem revelar as implementações de funções-membro de GradeBook
   4// que são definidas em GradeBook.cpp.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edição do Kindle.
   Pedro Filho 11/12/2020
*/
#include <string>
using namespace std;

class GradeBook
{
public:
   GradeBook( string ); // construtor que inicializa crusoNome
   void setNomeCurso( string ); // função para configurar o nome do curso
   string getNomeCurso(); // função que obtem o nome do curso
   void displayMessage(); // função que exibe a mensagem de boas vindas
private:
   string cursoNome;
}; // fim da classe GradeBook
