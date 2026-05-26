#include <iostream>
#include <string>  

class Player
{
public:

	std::string NAME;   // プレイヤーの名前
	int HP;             // プレイヤーのHP
    int A;
    int B;
    int C;
    int D;
    int S;

    // デフォルトコンストラクタ
    Player()
        : Player("Default")
    {
    }

    // コンストラクタ
    Player(std::string name, int hp = 108, int a = 130, int b = 95, int c = 80, int d = 85, int s = 102)
        : NAME(name), HP(hp), A(a), B(b), C(c), D(d), S(s) 
    {
    }
};

void Show(const Player& player)
{
    std::cout << "NAME : " << player.NAME << std::endl
        << "H : " << player.HP << std::endl
		<< "A : " << player.A << std::endl
		<< "B : " << player.B << std::endl
		<< "C : " << player.C << std::endl
		<< "D : " << player.D << std::endl
		<< "S : " << player.S << std::endl
        << std::endl;
}   

int main()
{
    Player player1;
    Player player2("勇者", 75, 65, 72, 159, 125, 139);

	Show(player1);
    Show(player2);
}