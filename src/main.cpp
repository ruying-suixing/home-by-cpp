#include <emscripten.h>
#include <iostream>
#include <string>

// 暴露给JS调用的函数
EMSCRIPTEN_KEEPALIVE
std::string getAuthorInfo() {
    return "姓名：XXX | C++开发者 | WebAssembly爱好者";
}

EMSCRIPTEN_KEEPALIVE
std::string getSkillList() {
    return "C++ / OpenGL / WebAssembly / 后端开发";
}

EMSCRIPTEN_KEEPALIVE
void printLog(const char* msg) {
    std::cout << "[C++日志] " << msg << std::endl;
}

int main() {
    std::cout << "C++个人主页Wasm模块加载完成！" << std::endl;
    return 0;
}