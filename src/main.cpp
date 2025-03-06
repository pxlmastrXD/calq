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
       auto num1 = (int) argv[1];
       auto aop = argv[2];
       auto num2 = (int) argv[3];
       enum MathType oper;
       switch (aop) {
        case '+':
            oper = MathType::ADD;
            break;
        case '-':
            oper = MathType::SUB;
            break;
        case '*':
            oper = MathType::MUL;
            break;
        case '/':
            oper = MathType::DIV;
            break;
        default:
            oper = MathType::OTHER;
            break;
       };
       auto op = Operations(num1, num2, oper);
       auto result = getResult(op);
       std::cout << "Result: " << result << "\n";
       return 0;
}