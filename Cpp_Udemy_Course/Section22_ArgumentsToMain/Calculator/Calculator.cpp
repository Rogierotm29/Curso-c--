#include <iostream>
#include <string>
#include <cstdlib>   // std::strtod

double to_number(const char* s, bool& ok) {
    char* end = nullptr;
    ok = true;
    double value = std::strtod(s, &end);

    // Si no convirtió nada o sobró texto no numérico
    if (end == s || *end != '\0') {
        ok = false;
        return 0.0;
    }
    return value;
}

int main(int argc, char* argv[]) {

    // Check the number of parameters
    if (argc != 4) {
        std::cerr << "Usage:\n";
        std::cerr << "  " << argv[0] << " a + b\n";
        std::cerr << "  " << argv[0] << " a - b\n";
        std::cerr << "  " << argv[0] << " a * b\n";
        std::cerr << "  " << argv[0] << " a / b\n\n";

        std::cerr << "You called with:";
        for (int i = 0; i < argc; ++i) {
            std::cerr << " " << argv[i];
        }
        std::cerr << "\n";
        return 1;
    }

    bool ok1 = false, ok2 = false;
    double a = to_number(argv[1], ok1);
    double b = to_number(argv[3], ok2);
    std::string op = argv[2];

    if (!ok1 || !ok2) {
        std::cerr << "Error: a and b must be valid numbers.\n";
        return 1;
    }

    double result = 0.0;

    if (op == "+") {
        result = a + b;
    } else if (op == "-") {
        result = a - b;
    } else if (op == "*") {
        result = a * b;
    } else if (op == "/") {
        if (b == 0.0) {
            std::cerr << "Error: division by zero.\n";
            return 1;
        }
        result = a / b;
    } else {
        std::cerr << "Error: unknown operator '" << op << "'.\n";
        std::cerr << "Allowed operators: + - * /\n";
        return 1;
    }

    std::cout << result << "\n";
    return 0;
}
