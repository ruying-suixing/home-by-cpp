#include <emscripten.h>
#include <iostream>
#include <string>

extern "C"
EMSCRIPTEN_KEEPALIVE
std::string getAuthorInfo() {
    return "姓名：XXX | C++开发者 | WebAssembly爱好者";
}

extern "C"
EMSCRIPTEN_KEEPALIVE
std::string getSkillList() {
    return "C++ / OpenGL / WebAssembly / 后端开发";
}

extern "C"
EMSCRIPTEN_KEEPALIVE
void printLog(const char* msg) {
    std::cout << "[C++日志] " << msg << std::endl;
}

int main() {
    std::cout << "C++个人主页Wasm模块加载完成！" << std::endl;
    return 0;
}