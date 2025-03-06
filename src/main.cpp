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
    int num1;
    int num2;
    MathType type;
};

int getResult(const Operations& op) {
    int result = 0;
    switch (op.type) {
    case MathType::ADD:
        result = op.num1 + op.num2;
        break;
    case MathType::SUB:
        result = op.num1 - op.num2;
        break;
    case MathType::MUL:
        result = op.num1 * op.num2;
        break;
    case MathType::DIV:
        if (op.num2 == 0) {
            std::cerr << "Error: Division by zero.\n";
            result = 0; // Set a default value
        } else {
            result = op.num1 / op.num2;
        }
        break;
    case MathType::OTHER:
        result = 69;
        break;
    }
    return result;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " num1 operator num2\n";
        return 1;
    }

    // Parse command-line arguments
    try {
        int num1 = std::stoi(argv[1]);
        int num2 = std::stoi(argv[3]);
        char aop = argv[2][0]; // Get the first character of the operator

        // Determine the operation type
        MathType oper;
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
        }

        // Create the operation structure
        Operations op = {num1, num2, oper};

        // Calculate and display the result
        int result = getResult(op);
        std::cout << "Result: " << result << "\n";
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << "\n";
    } catch (const std::out_of_range& e) {
        std::cerr << "Argument out of range: " << e.what() << "\n";
    }

    return 0;
}