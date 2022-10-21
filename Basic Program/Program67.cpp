#include <iostream>
//inheritance
using namespace std;
class Game {		//Base Class
public:
	void Walk() {
		cout << "Player is Walking...." << endl;
	}
	void Run() {
		cout << "Player is Running...." << endl;
	}
	void WalkAndRun() {
		Walk();
		Run();
	}
};
class Player :public Game {		//Derived Class
public:
	void Shoot() {
		cout << "Player is Shooting...." << endl;
	}
};
class Enemy :public Game {
public:
	void Kill() {
		cout << "Player is Killing...." << endl;
	}
};
class Obstacle :public Game {
public:
	void Delay() {
		cout << "Player is Delaying...." << endl;
	}
};
int main() {
	Game game;
	game.WalkAndRun();
	Player player;
	player.Shoot();
	Enemy enemy;
	enemy.Kill();
	Obstacle obstacle;
	obstacle.Delay();
	return 0;
}