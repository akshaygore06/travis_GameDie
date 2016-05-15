#include <iostream>
#include <stdlib.h>
#include "GameDie.h"

using namespace std;

int main()
{
	cout << "..Welcome to GameDie.."<<endl;
	GameDie gd;
	int a = gd.roll();
	cout << "The random number is : " <<a << endl;
	return 0;
}
