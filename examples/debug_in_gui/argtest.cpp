#include <iostream>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::cout << "第一个命令行参数是：" << argv[1] << std::endl;
    } else {
        std::cout << "没有提供命令行参数。" << std::endl;
    }
    
    return 0;
}
