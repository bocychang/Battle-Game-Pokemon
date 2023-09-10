//s1061460 week6 monster
#include <iostream>
#include <string>
#include<vector>
#include "monster.h"
using namespace std;

int main(int argc, const char* argv[])
{
	Dragon m1(0.6);
	Unicorn m2;
	Hedgehog m3;
	vector<Monster*> MonsterList(3);
	MonsterList[0] = &m1;
	MonsterList[1] = &m2;
	MonsterList[2] = &m3;
	int a, a2, b, b2;
	srand(time(NULL));
	a = (rand() % 3);
	a2 = (rand() % 3);
	b = (rand() % 3);
	b2 = (rand() % 3);
	int cnt = 1;
	string name1, name2;
	cout << "請輸入第一位玩家姓名:";
	getline(cin, name1);
	Monster* x = MonsterList[a];
	MonsterList[a]->showStats();
	Monster* y= MonsterList[a2];
	MonsterList[a2]->showStats();
	Player A;
	cout << "請輸入第二位玩家姓名:";
	getline(cin, name2);
	Player B;
	Monster* c = MonsterList[b];
	Monster* d = MonsterList[b2];
	MonsterList[b]->showStats();
	MonsterList[b2]->showStats();
	


	while (true) {
		std::cout << "Round " << cnt << std::endl;
		if (c->getHP() > 0) {
			x->attack(*c);
			
		}
		c->showStats();
		/*if (c = MonsterList[2]) {
			c->getCountAttack(*x);
			x->showStats();
		}*/
		/*if (MonsterList[b]->getHP() <= 0) {
			std::cout << ">>>"<< B.getName(name2) << " lose, "<< A.getName(name1) <<" win! <<<" << std::endl;
			MonsterList[a]->showStats();
		}*/
		if (d->getHP() > 0) {
			y->attack(*d);
			/*if (MonsterList[b2] = &m3) {
				MonsterList[b2]->getCountAttack(*MonsterList[a]);
			}*/
		}
		d->showStats();
		/*if (MonsterList[b2]->getHP() <= 0) {
			std::cout << ">>>" << B.getName(name2) << " lose, " << A.getName(name1) << " win! <<<" << std::endl;
			MonsterList[a2]->showStats();
		}*/
		/*m2.attack(m1);
		m1.showStats();
		if (m1.getHP() <= 0) {
			std::cout << ">>> Dragon died, Unicorn win <<<" << std::endl;
			m2.showStats();
			break;
		}*/
		if (x->getHP() > 0) {
			c->attack(*x);
			/*if (x = &m3) {
				x->getCountAttack(*c);
			}*/
			
		}
		x->showStats();
		/*if (MonsterList[a]->getHP() <= 0) {
			std::cout << ">>>" << A.getName(name1) << " lose, " << B.getName(name2) << " win! <<<" << std::endl;
			MonsterList[b]->showStats();
		}*/
		if (y->getHP() > 0) {
			d->attack(*y);
			/*if (y = &m3) {
				y->getCountAttack(*d);
			}*/
			
		}
		y->showStats();
		/*if (MonsterList[a2]->getHP() <= 0) {
			std::cout << ">>>" << A.getName(name1) << " lose, " << B.getName(name2) << " win! <<<" << std::endl;
			MonsterList[b2]->showStats();
		}*/
		if (y->getHP() <= 0 && x->getHP() <= 0) {
			std::cout << ">>>" << A.getName(name1) << " lose, " << B.getName(name2) << " win! <<<" << std::endl;
			c->showStats();
			d->showStats();
			break;
		}
		else if (d->getHP() <= 0 &&c->getHP() <= 0) {
			std::cout << ">>>" << A.getName(name2) << " lose, " << B.getName(name1) << " win! <<<" << std::endl;
			x->showStats();
			y->showStats();
			break;
		}
		/*else if (MonsterList[b2]->getHP() <= 0 && MonsterList[b]->getHP() > 0 && MonsterList[a2]->getHP() <= 0 && MonsterList[a]->getHP() > 0
				|| MonsterList[b]->getHP() <= 0 && MonsterList[b2]->getHP() > 0 && MonsterList[a]->getHP() <= 0 && MonsterList[a2]->getHP() > 0)
			std::cout << ">>>" << B.getName(name2) << " equal to " << A.getName(name1) <<  std::endl;*/
		std::cout << "===============================" << std::endl;
		cnt++;
	}
	if (a == 1) {
		a == 2;
	}
	a == 1;
	return 0;
}
