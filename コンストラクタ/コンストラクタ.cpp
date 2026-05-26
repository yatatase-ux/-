#include <iostream>
#include <string>  

class Player
{
public:

	std::string NAME;   // プレイヤーの名前
	int HP;             // プレイヤーのHP

    // デフォルトコンストラクタ
    Player()
        : Player("Default", 100)
    {
    }

    // コンストラクタ
    Player(std::string name, int hp)
        : NAME(name), HP(hp)
    {
    }
};

int main()
{
    Player player1;
    Player player2("勇者", 200);

    std::cout << "NAME : " << player1.NAME << ", HP : " << player1.HP << std::endl;
    std::cout << "NAME : " << player2.NAME << ", HP : " << player2.HP << std::endl;
}