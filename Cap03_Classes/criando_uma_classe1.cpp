/*
   Figura 3.1: fig03_01.cpp
   2// Define a classe GradeBook com uma fun��o-membro displayMessage;
   3// Cria um objeto GradeBook e chama sua fun��o displayMessage.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 58). Edi��o do Kindle.
   Pedro Filho 10/11/2020
*/

// biblioteca
#include <iostream>

using namespace std;

// criar a classe GradeBook
class GradeBook
{
public:
   // fun��o para mostrar mensagem de boas vindas
   void displayMessage()
   {
      cout<< "Bem vindo ao Grade Book!" << endl;
   } // fim fun��o
}; // fim classe grade_book

// fun��o principal
int main()
{
   // criando o objeto da classe GradeBook chamado meuGradeBook
   GradeBook meuGradeBook;

   // chamar a fun��o displayMessage com o objeto meugradeBook
   meuGradeBook.displayMessage();

   // fim do programa
   return 0;

} // fim main
