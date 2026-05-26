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
        : Player("ＮＯＮＡＭＥ")
    {
    }

    // コンストラクタ
    Player(std::string name, int hp = 108, int a = 130, int b = 95, int c = 80, int d = 85, int s = 102)
        : NAME(name), HP(hp), A(a), B(b), C(c), D(d), S(s) 
    {
    }

    //　コピーコンストラクタ
    Player(const Player& other)
        : NAME(other.NAME), HP(other.HP), A(other.A), B(other.B), C(other.C), D(other.D), S(other.S)
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
    // スマートポインタを使用して、下と同じ処理
    std::shared_ptr<Player> p(std::make_shared<Player>());
    std::shared_ptr<Player> p2 = p;     // コピーコンストラクタ

    Player player1;
    Player player2("勇者", 75, 65, 72, 159, 125, 139);
    Player player3 = player2;

    Show(player1);
    Show(player2);
    Show(player3);
}