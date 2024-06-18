#include <iostream>

int main(int argc, char* argv[]) {
    std::string message = "";

    if (argc == 1) {
        message = "y";
    } else if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            std::string addiction = "";

            if (i + 1 != argc) {
                addiction = " ";
            }

            std::string tmp = argv[i] + addiction;
            message += tmp;
        }
    }

    for (;;) {
        std::cout << message << std::endl;
    }

    return 0;
}