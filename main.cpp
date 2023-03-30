#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
    private:
        int top;
        int arr[MAX_SIZE];
    public:
        Stack() {
            top = -1;
        }

        bool isEmpty() {
            return (top == -1);
        }

        bool isFull() {
            return (top == MAX_SIZE - 1);
        }

        int getSize() {
            return (top + 1);
        }

        void push(int x) {
            if (isFull()) {
                cout << "Erro: pilha cheia" << endl;
                return;
            }
            arr[++top] = x;
        }

        void pop() {
            if (isEmpty()) {
                cout << "Erro: pilha vazia" << endl;
                return;
            }
            top--;
        }

        int peek() {
            if (isEmpty()) {
                cout << "Erro: pilha vazia" << endl;
                return -1;
            }
            return arr[top];
        }
};

int main() {
    Stack s;

    // Testando a inserção de elementos na pilha
    s.push(10);
    s.push(20);
    s.push(30);

    // Testando a leitura do topo da pilha
    cout << "Topo da pilha: " << s.peek() << endl;
    // Resultado esperado: 30

    // Testando o tamanho da pilha
    cout << "Tamanho da pilha: " << s.getSize() << endl;
    // Resultado esperado: 3

    // Testando a remoção de elementos da pilha
    s.pop();
    cout << "Topo da pilha: " << s.peek() << endl;
    // Resultado esperado: 20

    s.pop();
    s.pop();
    s.pop();
    // Testando a remoção de elementos da pilha vazia
    s.pop();
    // Resultado esperado: "Erro: pilha vazia"

    // Testando a verificação de pilha vazia
    cout << "Pilha vazia? " << (s.isEmpty() ? "Sim" : "Nao") << endl;
    // Resultado esperado: Sim

    return 0;
}

