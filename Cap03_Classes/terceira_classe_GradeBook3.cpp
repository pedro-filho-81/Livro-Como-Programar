/*
   1// Figura 3.3: fig03_03.cpp
   2// Define a classe GradeBook com uma função-membro que aceita um parâmetro;
   3// Cria um objeto GradeBook e chama sua função-membro displayMessage.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 61). Edição do Kindle.
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
   // função que configura o nome do curso
   void setNomeCurso( string nome )
   {
      // armazena o nome do curso no objeto
      cursoNome = nome;
   } // fim setNomeCurso

   // função para obter o nome do curso
   string getNomeCurso()
   {
      // retorna o cursoNome do objeto
      return cursoNome;
   } // fim getNomeCurso

   // função para mostrar mensagem de boas vindas
   void displayMessage( string nomeCurso )
   {
      // essa instrução chama getNomeCurso para obter o
      // nome do curso que esse GradeBook representa
      cout<< "Bem vindo ao curso:\n" << getNomeCurso() <<endl;
   } // fim função

private:
   string cursoNome; // variável nome do curso para essa GradeBook

}; // fim classe grade_book

// função principal
int main()
{
   // VARIÁVEL
   string nomeDoCurso;

   // criando o objeto da classe GradeBook chamado meuGradeBook
   GradeBook meuGradeBook;

   // entrada de dados
   cout<< "Digite o nome do curso:" << endl;

   // lê o nome do curso com espaços em branco
   getline( cin, nomeDoCurso );

   // configura o nome do curso
   meuGradeBook.setNomeCurso( nomeDoCurso );
   cout<< "\n"; // pular uma linha

   // chamar a função displayMessage com o objeto meugradeBook
   meuGradeBook.displayMessage( nomeDoCurso );

   // fim do programa
   return 0;

} // fim main
