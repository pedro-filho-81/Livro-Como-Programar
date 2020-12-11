/*
   1// Figura 3.7: fig03_07.cpp
   2// Instanciando múltiplos objetos da classe GradeBook e utilizando
   3// o construtor GradeBook para especificar o nome do curso
   4// quando cada objeto GradeBook é criado.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 68). Edição do Kindle.
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
      // chamar a função setNomeCurso para inicializar cursoNome
      setNomeCurso( nome );
   } // fim construtor GradeBook

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
   string cursoNome; // variável nome do curso para esse GradeBook

}; // fim classe grade_book

// função principal
int main()
{
   // VARIÁVEL
   string nomeDoCurso;

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
