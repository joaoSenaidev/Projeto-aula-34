// NOME DA DUPLA: Jo√£o Pedro e Beatriz.

#include <iostream>
#include <vector>
#include <locale.h>
#include <string>
#include <limits>
using namespace std;

// variaves globais - servem para todas as


void desenhaBoasVindas()
{
    cout << "========================================\n";
    cout << "|                                      |\n";
    cout << "|        BEM VINDO AO PROGRAMA         |\n";
    cout << "|                 DE                   |\n";
    cout << "|         PASSAGENS AREAS              |\n";
    cout << "|                                      |\n";
    cout << "========================================\n";
    cout << "\n";
    cout << "\n";
    }
void desenhaMenu()

{
    cout << "========================================\n";
    cout << "| escolha uma opcao:                   |\n";
    cout << "|    1)Cadastrar Passagem              |\n";
    cout << "|    2)Listar passagens                |\n";
    cout << "|    0)sair                            |\n";
    cout << "|                                      |\n";
    cout << "========================================\n";
    cout << "opÁ„o: ";
}
void limpaBufferDoCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;
void cadastrarPassagem()
{
    string nome, destino, origem, dataViagem;
    limpaBufferDoCin();
    cout << "Digite o nome do passageiro: ";
    getline(cin, nome);
    cout << "\n";

    passageiros.push_back(nome);

    cout << "Digite a origem do passageiro: ";
    getline(cin, origem);
    cout << "\n";

    origens.push_back(origem);

    cout << "Digite o destino do passageiro: ";
    getline(cin, destino);
    cout << "\n";

    destinos.push_back(destino);

    cout << "Digite a data da viagem do passageiro: ";
    getline(cin, dataViagem);
    cout << "\n";

    datas.push_back(dataViagem);
}
void listaDePassagens()
{
     cout << "Quantidade de passagem: " << passageiros.size() << endl << endl;
        for(int i = 0; i < passageiros.size(); i++){
         cout << "passageiro " << i+1 << ": " << passageiros[i] << endl;
         cout << "origem " << ": " << origens[i] << endl; 
         cout << "destino " << ": " << destinos[i]<< endl;
         cout << "data " << ": " << datas[i] << endl;
         cout << endl;
        }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    int opcao = -1;
    string continua = "";
    desenhaBoasVindas();
    do
    {
        desenhaMenu();
        cin >> opcao;
        cout << endl;

        switch (opcao)
        {
        case 1:
            cout << "voce escolheu a opcao cadastrar passagem" << endl;
            cadastrarPassagem();

            break;
        case 2:
            cout << "voce escolheu a opcao de listar passagem" << endl;
            listaDePassagens();
        
            break;

        default:
            cout << "opcao invalida. \n";
            break;
        }
    } while (opcao != 0);
    system("cls");
    cout << "obrigado por utilizar o programa :) \n\n ";

    return 0;
}