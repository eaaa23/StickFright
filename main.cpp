#include<cstdlib>
#include"game/game.h"



int main()
{
    auto g = Game();
    g.init_all();
    g.start();
    return 0;
}
