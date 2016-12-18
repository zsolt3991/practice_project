#include "Card.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Models;

int main()
{
	auto card = Card();
	cout << static_cast<string>(card);
	getchar();
}