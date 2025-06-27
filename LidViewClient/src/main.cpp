// main.cpp: 定义应用程序的入口点。
//

#include<LidViewServer.h>

Application* app;

int main(int argc, char* argv[])
{
    app = new Application(argc, argv);
    if(app == nullptr)
    {
		delete app;
        return -1; // 应用程序创建失败
	}

    app->run();
    return 0;
}