// main.cpp: 定义应用程序的入口点。
//

#include<LidViewServer.h>

int main(int argc, char* argv[])
{
    Application* app = new Application(argc, argv);
    if(app == nullptr)
    {
		delete app;
        return -1; // 应用程序创建失败
	}

    Object Player;

    Player.add_component(ComponentData(
        Player.get_id(),
        RenderComponent,
        0, 0, 0,
        nullptr
    ));

    app->run();
    return 0;
}