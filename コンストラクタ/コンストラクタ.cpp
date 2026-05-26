#include <iostream>

class Player
{
public:
    int HP;
    // コンストラクタ
    Player(int hp) : HP(hp)
    {

    }
};

int main()
{
    Player player(50);

    std::cout << "HP : " << player.HP << std::endl;
}