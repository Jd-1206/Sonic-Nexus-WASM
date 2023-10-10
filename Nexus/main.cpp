#include "RetroEngine.hpp"
int setLoop = 0;

extern "C"{
    EMSCRIPTEN_KEEPALIVE void RSDKInitialize()
    {
        Engine.Init();
        emscripten_set_main_loop([] () { Engine.Run(); }, Engine.refreshRate, 1);
    }
}


int main()
{
    return 0;
}