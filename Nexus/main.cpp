#include "RetroEngine.hpp"

int main()
{
    Engine.Init();
    emscripten_set_main_loop([] () { Engine.Run(); }, Engine.refreshRate, 1);

    return 0;
}