#include <iostream>
#include <string>  

// プレイヤーの初期設定をまとめた構造体
struct PlayerSettings
{
    std::string NAME;
    int HP;
    int A;
    int B;
	int C;
	int D;
	int S;
};

/// <summary>
/// プレイヤークラス
/// </summary>
class Player
{
public:

//	std::string NAME;   // プレイヤーの名前
    PlayerSettings Settings;
/*
	int HP;             // プレイヤーのHP
	int A;              // プレイヤーの攻撃力
	int B;              // プレイヤーの防御力
	int C;              // プレイヤーの魔法攻撃力
    int D;              // プレイヤーの魔法防御力
    int S;              // プレイヤーの素早さ        

    // デフォルトコンストラクタ
    Player()
        : Player("ＮＯＮＡＭＥ", PlayerSettings())
    {
    }
*/

    Player(const Player& other)
        : Player(other.Settings)
    {
    }

    Player(const PlayerSettings& settings)
        : Settings(settings)
    {
    }

/*
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

    // 構造体を引数に取るコンストラクタ 
    Player(std::string name, const PlayerSettings& settings)
        : Player(name, settings.HP, settings.A, settings.B, settings.C, settings.D, settings.S)
    {
    }
*/

};

/// <summary>
/// プレイヤー数値表示関数
/// </summary>
/// <param name="player">表示するプレイヤーのインスタンス</param>
void Show(const Player& player, std::string name)
{
    std::cout << name << std::endl
              << "NAME : " << player.Settings.NAME << std::endl
              << "H : " << player.Settings.HP << std::endl
		      << "A : " << player.Settings.A << std::endl
		      << "B : " << player.Settings.B << std::endl
		      << "C : " << player.Settings.C << std::endl
		      << "D : " << player.Settings.D << std::endl
		      << "S : " << player.Settings.S << std::endl
              << std::endl;
}

// プレイヤーの初期設定
PlayerSettings hero = 
{
	"勇者",  // NAME
    108,    // HP
    130,    // A
    95,     // B
    80,     // C
    85,     // D
    102     // S
};

PlayerSettings magician
{
	"魔法使い",  // NAME
    75,     // HP
    65,     // A
    72,     // B
    159,    // C
    125,    // D
    129     // S
};

int main()
{
/*
    // スマートポインタを使用して、下と同じ処理
    std::shared_ptr<Player> p(std::make_shared<Player>());
    std::shared_ptr<Player> p2 = p;     // コピーコンストラクタ

    Player player1("勇者1", 75, 65, 72, 159, 125, 139);
    Player player2 = player1;
    Player player3("勇者2", hero);

    Show(player1, "player1");
    Show(player2, "player2");
    Show(player3, "player3");
	Show(*p, "p");
	Show(*p2, "p2");
*/

    Player player1(hero);       // 勇者
    Player player2 = player1;   // 勇者のコピー
	Player player3(magician);   // 魔法使い

    Show(player1, "player1");
    Show(player2, "player2");
    Show(player3, "player3");
}