#include <iostream>
#include <string>

enum class MathType {
    ADD,
    SUB,
    MUL,
    DIV,
    OTHER
};

struct Operations {
    int num1,
    int num2, 
    enum MathType type
};

int getResult(Operations op) {
    auto result = int();
    switch (op.type) { // TODO: Implement operations based on sh!t
    case Operations::ADD:
        break;
    case Operations::SUB:
        break;
    case Operations::MUL:
        break;
    case Operations::DIV:
        break;
    case Operations::OTHER:
        break;
    };
    return result;
}


int main(int argc, char* argv[]) {
       auto op; // TODO: Parse args and make it into an Operations();
       
}