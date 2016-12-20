#pragma once
#include "Utils.h"
#include <string>
#include <sstream>
#include "DeckType.h"
using namespace std;

namespace Models {
	
	class Card
	{
	public:
		Card(int, int, DeckType*);
		int GetValue() { return m_value; };
		int GetSuit() { return m_suit; };
		std::string toString();
		~Card();
	private:
		int m_suit;
		int m_value;
		DeckType* m_deckType;
	};
}
