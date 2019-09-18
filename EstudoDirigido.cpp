#include <iostream>
#include <vector>       //biblioteca para vector
#include <iomanip>      //biblioteca para size
#include <algorithm>    //biblioteca para sort

using namespace std;

int main(){
int opc, i, dcs;

    vector <int> vct;
    vector <int> vct2; //para não perder os dados ao substituir por zero em alguma das opções

    setlocale(LC_ALL,"portuguese");

    do {
        cout << "Digite um número inteiro para adicionar em sua lista:\n";
        cin >> opc;
        vct.push_back(opc);
        cout << "Se desejar digitar mais números, digite 1. Se desejar terminar sua lista aqui, digite 0:\n";
        cin >> i;

            while(i != 1 && i != 0){

                cout << "Número inválido! \n Se desejar digitar mais números, digite 1. Se desejar terminar sua lista aqui, digite 0: \n";
                cin >> i;
                cout << endl;
            }

    } while (i == 1);


    vct2 = vct;
    cout << endl << "*************************" << endl << endl;

    // calculo das opções:
    int som1 = 0, som5 = 0;
    double med2 = 0, med4 = 0, med5 = 0;

    //os números que acompanham as variáveis são referentes ao dígito da opção;
    for (int num:vct) {
        som1 = som1 + num;
        //somatório da opção do dígito 1;
    }

    med2 = som1 / vct.size();
    //média opção 2;

    for(int num:vct) {
        if(num < 0) {
            num = 0;
        }

        med4 = med4 + num;
    }

    med4 = med4 / vct.size();
    //media da opção do dígito 4;

    sort(begin(vct), end(vct));

    for (int x = 0; x < vct.size(); x++) {
        for (int y = 0; y < vct.size(); y++) {
            if (x != y && vct[x] == vct[y]){
                        vct[y] = 0;
            }
        }
    }

    for (int num:vct){
        som5 = som5 + num;
    }

    med5 = som5 / vct.size();
    //média e somatório da opção do dígito 5


    do {

        cout << "Segue abaixo algumas opções para serem executadas com sua lista de números:\n \n";
        cout << "Para imprimir o somatório dos elementos de sua lista, digite 1;" << endl;
        cout << "Para imprimir a média dos elementos de sua lista, digite 2;"<< endl;
        cout << "Para imprimir a média e o somatório dos elementos de sua lista, digite 3;" << endl;
        cout << "Para substituir por zero todos os valores negativos e imprimir a média de sua lista, digite 4;" << endl;
        cout << "Para substituir por zero todos os valores repetidos e imprimir a média e o somatório de sua lista, digite 5;" << endl;
        cout << "Para imprimir os elementos de sua lista ordenados, digite 6;" << endl;
        cout << "Para parar por aqui, digite 0;\n\n";

        cin >> dcs;
        cout << endl << endl;

        while (dcs != 1 && dcs != 2 && dcs != 3 && dcs != 4 && dcs != 5 && dcs != 6 && dcs != 0 ) {
            cout << "Dígito inválido! Escolha uma das opções acima: ";
            cin >> dcs;
        }

        if (dcs == 1){
            cout << "O somatório de sua lista é: " << som1;
        }

        if (dcs == 2){
            cout << "A média de sua lista é: " << med2;
        }

        if (dcs == 3){
            cout << "O somatório de sua lista é: " << som1 << endl;
            cout << "A média de sua lista é: " << med2;
        }

        if (dcs == 4){
            cout << "A média de sua lista com os valores negativos substituídos por 0 é: " << med4;
        }

        if (dcs == 5){
            cout << "O somatório de sua lista com os números repetidos substituídos por zero é: " << som5 << endl;
            cout << "A média de sua lista com os números repetidos substituídos por zero é: " << med5;
        }

        if (dcs == 6){
            cout << "A sua lista ordenada fica da seguinte maneira: ";

            sort(begin(vct2), end(vct2));

            for (int i = 0; i < vct2.size(); i++) {
                cout << vct2[i] << setw(5);
            }
        }

        cout << endl << endl << "*************************" << endl << endl;


    } while(dcs != 0);


    return 0;
}
