#include <emscripten.h>
#include <iostream>

// extern "C" + 返回普通C字符串指针，完全兼容C链接规范
extern "C"
EMSCRIPTEN_KEEPALIVE
const char* getAuthorInfo() {
    return "姓名：XXX | C++开发者 | WebAssembly爱好者";
}

extern "C"
EMSCRIPTEN_KEEPALIVE
const char* getSkillList() {
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