///@author Наталья Иванова

#include <TXLib.h>
#include "Ghostn.h"

int main()
{
    txCreateWindow(600, 600);
    Map maze;
    Ghost ghost;
    maze.init();
    ghost.init(maze);
    txBegin();

    while(!GetAsyncKeyState(VK_RETURN))
    {
        ghost.start_game();
        txSleep(200);
    }

    while(!GetAsyncKeyState(VK_ESCAPE))
    {
        ghost.next();
        txClear();
        maze.draw();
        ghost.draw();
        txSleep(70);
    }

    txEnd();
    txDeleteDC(maze.texture);
    txDeleteDC(ghost.pic);
    txDeleteDC(ghost.win_fail);
}
