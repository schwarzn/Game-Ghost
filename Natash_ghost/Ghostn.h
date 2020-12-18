///@author ������� �������

#include <TXLib.h>

class Map
{
    int w = 40;                              //<������ �����
public:
    HDC texture;                             //<�������� �����
    int k = 12;                               //<����� ��������� ������� �����

    int big_map[20][15][15] = {{{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //0
                                {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1}},

                               {{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1},     //1
                                {1, 1, 1, 0, 0, 1, 1, 1, 3, 3, 1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0},
                                {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //2
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 0, 0, 3, 1, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1}},

                               {{1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},     //3
                                {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //4
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                                {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
                                {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //5
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1},
                                {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1}},

                               {{1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1},     //6
                                {1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                                {1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //7
                                {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //8
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},     //9
                                {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1},     //10
                                {1, 1, 1, 1, 1, 1, 1, 0, 3, 0, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
                                {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
                                {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
                                {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
                                {0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                                {1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1},     //11
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {0, 0, 3, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1},
                                {0, 0, 3, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //12
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},     //13
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 3, 0, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 3, 0, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},     //14
                                {1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1}},

                               {{1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1},     //15
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
                                {1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
                                {1, 0, 0, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //16
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 3, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1},     //17
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                                {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                                {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                                {1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1},
                                {0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1},
                                {0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1},
                                {1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
                                {1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1},     //18
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {0, 0, 0, 0, 0, 0, 3, 0, 3, 0, 3, 0, 0, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}},

                               {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},     //19
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 3, 3, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 3, 3, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}}
                              };


    ////////functions////////
    void init()                              //<�������������
    {
        this->texture = txLoadImage("structures.bmp");
        if(!texture)
        {
            txMessageBox("�� ������� ������� ���� structures.bmp");
        }
    }

    void draw()                              //<��������� �����
    {
        for(int i = 0; i < 15; i++)
        {
            for(int j = 0; j < 15; j++)
            {
                if(big_map[k][i][j] == 2)                //����
                    Win32::TransparentBlt(txDC(), 40*i, 40*j, 40, 40, texture, 0, 100, 100, 100, TX_WHITE);
                else if(big_map[k][i][j] == 1)           //�����
                    Win32::TransparentBlt(txDC(), 40*i, 40*j, 40, 40, texture, 0, 200, 100, 100, TX_WHITE);
                else if(big_map[k][i][j] == 0)           //�������
                    Win32::TransparentBlt(txDC(), 40*i, 40*j, 40, 40, texture, 0,   0, 100, 100, TX_WHITE);
                else if(big_map[k][i][j] == 3)           //������
                {
                    Win32::TransparentBlt(txDC(), 40*i, 40*j, 40, 40, texture, 0,   0, 100, 100, TX_WHITE);
                    Win32::TransparentBlt(txDC(), 40*i, 40*j, 40, 40, texture, 0, 400, 100, 100, TX_WHITE);
                }
            }
        }
    }

    int get_cell(int x, int y)               //<����������� �������� �����
    {
        int res;
        res = big_map[k][int(x/w)][int(y/w)];
        return res;
    }

    void set_cell(int x, int y, int n)       //<��������� �������� ������ �����
    {
        big_map[k][int(x/w)][int(y/w)] = n;
    }

};

class Ghost
{
    int x = 200, y = 200, dx = 10;             //<���������� ���������, ��������
    double scale = 0.5;                        //<������
    int xpic = 0, xpic_max = 200, ypic = 0;    //<���������� ��������
    Map *a;                                    //<�����
public:
    HDC pic;                                   //<�������� ��������
    int coins = 0;                             //<������� �����
    COLORREF color = RGB(237, 28, 36);
    int end_game = 0;                          //��������� ����
    HDC win_fail;                              //�������� ������, �������� � ���������
    int fin = 0;                               //��������� ����

    ///////functions////////

    void right();
    void left();
    void up();
    void down();

    void init(Map &a1)                    //<�������������
    {
        this-> a        = &a1;
        this-> pic      = txLoadImage("ghostnn.bmp");
        this-> win_fail = txLoadImage("startwinfail.bmp");
        if(!pic)
            txMessageBox("�� ������� ������� ���� ghostn.bmp");
        if(!win_fail)
            txMessageBox("�� ������� ������� ���� startwinfail.bmp");
    }

    void check_end()
    {
        if(coins >= 10)
            end_game = 1;
    }

    void start_game()
    {
        Win32::TransparentBlt(txDC(), 0, 0, 600, 600, win_fail, 0, 0, 600, 600, TX_WHITE);
    }

    void draw()                           //<���������
    {
        Win32::TransparentBlt(txDC(), x, y, int(100*scale), int(100*scale), pic, xpic, ypic, 96, 96, color);
        if(fin == 1)
        {
            if(end_game == 1)
                Win32::TransparentBlt(txDC(), 0, 0, 600, 600, win_fail, 0, 600, 600, 600, TX_WHITE);
            if(end_game == 0)
                Win32::TransparentBlt(txDC(), 0, 0, 600, 600, win_fail, 0, 1200, 600, 600, TX_WHITE);
        }
    }

    void next()                           //<������ ���������� ����
    {
        if(GetAsyncKeyState(VK_RIGHT))
        {
            right();
        }
        if(GetAsyncKeyState(VK_LEFT))
        {
            left();
        }
        if(GetAsyncKeyState(VK_UP))
        {
            up();
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            down();
        }
        if(a->get_cell(x + dx + int(50*scale), y + dx + int(50*scale)) == 3)
        {
            a->set_cell(x + dx + int(50*scale), y + dx + int(50*scale), 0);
            coins += 1;
        }
        if(fin == 1)
        {
            check_end();
        }
    }
};

void Ghost::right()
{
    ypic = 200;
    if((a->get_cell(x + dx + int(50*scale) + 22, y + int(50*scale)) == 1) || (a->get_cell(x + dx + int(50*scale) + 22, y + int(50*scale)) == 2))
        return;
    xpic += 100;

    if(x + int(80*scale) <= 580)
        x += dx;
    else
    {
        a->k += 1;
        x = 0;
    }

    if(coins > 5)
        ypic = 600;
    else
        ypic = 200;

    if(xpic > xpic_max)
        xpic = 0;
}

void Ghost::left()
{
    ypic = 100;
    if((a->get_cell(x - dx + int(50*scale) - 22, y + int(50*scale)) == 1) || (a->get_cell(x - dx + int(50*scale) - 22, y + int(50*scale)) == 2))
        return;
    xpic += 100;

    if(x + int(80*scale) >= 0)
        x -= dx;
    else
    {
        a->k -= 1;
        x = 570;
    }

    if(coins > 5)
        ypic = 500;
    else
        ypic = 100;

    if(xpic > xpic_max)
        xpic = 0;

    if(a->k == 0 && x < 5)            //���� ����� ������
    {
        fin = 1;
    }
}

void Ghost::up()
{
    ypic = 300;
    if((a->get_cell(x + int(50*scale), y - dx + int(50*scale) - 22) == 1) || (a->get_cell(x + int(50*scale), y - dx + int(50*scale) - 22) == 2))
        return;
    xpic += 100;

    if(y + int(80*scale) > 10)
        y -= dx;
    else
    {
        a->k -= 4;
        y = 550;
    }

    if(coins > 5)
        ypic = 700;
    else
        ypic = 300;

    if(xpic > xpic_max)
        xpic = 0;
}

void Ghost::down()
{
    ypic = 0;
    if((a->get_cell(x + int(50*scale), y + dx + int(50*scale) + 22) == 1) || (a->get_cell(x + int(50*scale), y + dx + int(50*scale) + 22) == 2))
        return;
    xpic += 100;

    if(y + int(80*scale) < 580)
        y += dx;
    else
    {
        a->k += 4;
        y = 0;
    }

    if(coins > 5)
        ypic = 400;
    else
        ypic = 0;

    if(xpic > xpic_max)
        xpic = 0;
}


