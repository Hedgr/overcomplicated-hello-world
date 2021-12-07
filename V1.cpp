#include <iostream>
#include <string>

using namespace std;

class cmain_class {
public:
    void main();
    string to_print = "Hello World\n";
};

void cmain_class::main() {
    std::cout << cmain_class::to_print << std::endl;
}

cmain_class main_class;

int main() {
    main_class.main();
    return 0;
}
