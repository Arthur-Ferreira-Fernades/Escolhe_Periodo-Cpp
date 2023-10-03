#include <iostream>
#include <string>
using namespace std;

void conferePeriodo() {
    
    string periodos[3] {"Matutino","Vespertino","Noturno"};
    
    string resp;
    cin>> resp;
    
    if(resp == "m" || resp == "M") {
        cout<<"O periodo escolhido foi: " + periodos[0];
    }
    
    if(resp == "v" || resp == "V") {
        cout<<"O periodo escolhido foi: " + periodos [1];
    }
    
    if(resp == "n" || resp == "N") {
        cout<<"O periodo escolhido foi: " + periodos [2];
    }
}

int main()
{
    
    string resp;
    
    cout<<"Você é obrigado a estudar!\n Escolha um periodo:\n";
    cout<<"Digite 'M' para matutino, 'V' para vespertino ou 'N' noturno: ";
    conferePeriodo();
    
}




