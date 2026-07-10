#include <emscripten.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

extern "C"
EMSCRIPTEN_KEEPALIVE
char* getAuthorInfo() {
    const char* raw = "姓名: XXX | C++开发者 | WebAssembly爱好者";
    size_t len = strlen(raw) + 1;
    char* buf = (char*)malloc(len);
    strcpy(buf, raw);
    return buf;
}

extern "C"
EMSCRIPTEN_KEEPALIVE
char* getSkillList() {
    const char* raw = "C++ / OpenGL / WebAssembly / 后端开发";
    size_t len = strlen(raw) + 1;
    char* buf = (char*)malloc(len);
    strcpy(buf, raw);
    return buf;
}

extern "C"
EMSCRIPTEN_KEEPALIVE
void printLog(const char* msg) {
    printf("[C++日志] %s\n", msg);
}

extern "C"
EMSCRIPTEN_KEEPALIVE
void freeStr(char* p) {
    free(p);
}