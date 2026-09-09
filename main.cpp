#include <iostream>

  using namespace std;

   int main() {
   char op;
   float num1, num2;

   cout << "Digite a operação (+, -, *, /): ";
   cin >> op;

   cout << "Digite a primeira operação: ";
   cin >> num1 >> num2;
    switch(op) {
        cout << "Resultado: " << num1 + num2 << endl;
        break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Erro! Divisao por zero." << endl;
            break;
        default:
            cout << "Operador invalido!" << endl;
            break;
    }

    return 0;
}
   }