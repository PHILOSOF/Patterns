#include <iostream>
#include <string>
using namespace std;

class MainObjectGame
{
	static MainObjectGame* object;

	std::string gameName;

	MainObjectGame() {}

public:

	static MainObjectGame* getInstance()
	{
		if (object == NULL)
		{
			object = new MainObjectGame();
		}
		return object;
	}

	void setGameName(const std::string& name)
	{
		gameName = name;
	}

	void Show() const
	{
		cout << gameName << endl;
	}
};

MainObjectGame* MainObjectGame::object = NULL;

int main()
{
	MainObjectGame* game = MainObjectGame::getInstance();

	game->setGameName("Space Invider");
	game->Show();

	delete game;

	return 0;
}