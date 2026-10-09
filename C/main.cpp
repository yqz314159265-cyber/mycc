#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	//今天学习到程序是如何开始运行的，例如当命令行调用./main.exe "./text.cpp"时，
	// 会向主程序传递数个参数，第一个是传入参数的个数。而字符串将会被传递，例如argv[1]就是指向"./text.cpp"的指针

	std::string path;

	if (argc >= 2) {
		//使用命令行调用
	}
	else {
		//双击exe调用
		std::cout << "请输入文件路径" << std::endl;
		std::getline(std::cin, path);
	}

	return 0;
}