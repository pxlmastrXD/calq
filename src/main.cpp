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
    switch (op.type) { 
    case Operations::ADD:
        result = op.num1 + op.num2;
        break;
    case Operations::SUB:
        result = op.num1 - op.num2;
        break;
    case Operations::MUL:
        result = op.num1 * op.num2;
        break;
    case Operations::DIV:
        result = op.num1 / op.num2;
        break;
    case Operations::OTHER:
        result = 69;
        break;
    };
    return result;
}


int main(int argc, char* argv[]) {
       auto op; // TODO: Parse args and make it into an Operations();
       
}