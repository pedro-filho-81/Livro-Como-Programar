/*
*  2.16 Escreva um programa que solicita ao usu�rio inserir dois n�meros,
   obt�m os dois n�meros do usu�rio e imprime a soma, produto, diferen�a
   e quociente dos dois n�meros.
   Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edi��o do Kindle.
*  Autor: Pedro Filho, 09/12/2020
*/
// inclua biblioteca
#include <iostream>

using namespace std;

// Fun��o principal
main()
{
    // Vari�veis
    int n1;
    int n2;
    int soma;
    int subtrair;
    int produto;
    int diferenca;
    int quociente;

    // Entrada de dados
    cout<<"Digite um inteiro: ";
    cin>>(n1);
    cout<<"Digite outro inteiro: ";
    cin>>(n2);

    // calcular
    soma = n1 + n2;
    subtrair = n1 - n2;
    produto = n1 * n2;
    quociente = n1 / n2;
    diferenca = n1 % n2;

    // Mostra na tela
    cout<<"Soma = "<< soma <<endl;
    cout<<"Subtrair = "<< subtrair<<endl;
    cout<<"Produto = "<< produto<<endl;
    cout<<"Quociente = "<< quociente<< endl;
    cout<<"Diferenca = "<< diferenca << endl;

    if( n1 == n2 ) {
      cout<< "N�meros iguais." << endl;
    }

    if (n1 > n2){
        cout<<n1 <<" E maior.\n"<< n2<<" E o menor"<<endl;
    }
    if (n2 > n1){
        cout<< n2<< " E o maior.\n"<< n1<<" E o menor."<<endl;
    }

} // fim main
