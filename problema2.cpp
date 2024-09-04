#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto;
    getline(cin, texto);
  
    int qtd_a = 0;
    int i = 0;
    
    while(texto[i] != '\0'){
        if(texto[i] == 'a' || texto[i] == 'A')
            qtd_a++;
        i++;
    }
    
    if(qtd_a == 0)
        cout << "Não existe (a/A)'s em no texto informado!" << endl;
    else
        cout << "O texto informado possuí " << qtd_a << " caractere(s) (a/A)'s" << endl;
    
    return 0;
}
