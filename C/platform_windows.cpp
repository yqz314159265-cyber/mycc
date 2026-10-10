#include "platform.h"

#include <windows.h>
#include <cstdlib>

//std::system("pause");使用这条命令所需的头文件，最好显式包含

//std::system("pause");是Windows特有命令，跨平台移植时需要处理

void configureConsole()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

void pauseBeforeExit()
{
    std::system("pause");
}