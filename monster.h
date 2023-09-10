//s1061460 week6 monster
#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

class Monster {
private:
	int HP;
	int MaxHP;
	int Attack;
	int Defense;
public:
	Monster(int hp, int mxhp, int atk, int def) :HP(hp), MaxHP(mxhp), Attack(atk), Defense(def) {}
	void setHP(int hp) { HP = hp; }
	int getHP() const { return HP; }
	int getMaxHP() const { return MaxHP; }
	int getAttack() const { return Attack; }
	int getDefense() const { return Defense; }
	virtual void showStats() {
		std::cout << std::setw(10) << "Monster(" << std::setw(3) << getHP() << " / " << std::setw(3) << getMaxHP() << " )" << std::endl;
	}
	virtual void attack(Monster& m) {
		m.setHP(m.getHP() - (getAttack() - m.getDefense()));
	}
	virtual void getCountAttack(Monster& m) {
		m.setHP(m.getHP() - (getAttack() * 0.25));
	}
};

#endif // MONSTER_H


class Dragon :public Monster {
private:
	double Rate;
public:
	Dragon(double rt) :Monster(1200, 1200, 500, 100), Rate(rt) {}
	virtual void showStats() {
		std::cout << std::setw(10) << "Dragon(" << std::setw(3) << getHP() << " / " << std::setw(3) << getMaxHP() << " )" << std::endl;
	}
	virtual void attack(Monster& m) {
		int a;
		a = (rand() % 10) + 1;
		int Add = Rate * a;
		m.setHP(m.getHP() - (getAttack() - m.getDefense()) - Add);
	}
};

class Unicorn :public Monster {
public:
	Unicorn() :Monster(1100, 1100, 300, 100) {}
	virtual void showStats() {
		std::cout << std::setw(10) << "Unicorn(" << std::setw(3) << getHP() << " / " << std::setw(3) << getMaxHP() << " )" << std::endl;
	}
	virtual void attack(Monster& m) {
		int index[4]{ 0,0,1,0 };
		int a;
		srand(time(NULL));
		a = (rand() % 3) + 1;
		m.setHP(m.getHP() - (getAttack() - m.getDefense()) - getAttack() * index[a]);
	}
};

class Hedgehog :public Monster {
public:
	Hedgehog() :Monster(1200, 1200, 400, 200) {}
	virtual void showStats() {
		std::cout << std::setw(10) << "Hedgehog(" << std::setw(3) << getHP() << " / " << std::setw(3) << getMaxHP() << " )" << std::endl;
	}

	virtual void attack(Monster& m) {
		m.setHP(m.getHP() - (getAttack() - m.getDefense()));
	}

	virtual void getCountAttack(Monster& m) {
		m.setHP(m.getHP() - (getAttack() * 0.25));
	}
};

class Player {
public:
	Player(){}
	string getName(string name) {
		return name;
	}
	void getCurrentMonster() {

	}
};