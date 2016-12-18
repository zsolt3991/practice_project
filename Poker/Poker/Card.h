#pragma once
#include "Utils.h"
#include <string>
#include <sstream>
using namespace std;

namespace Models {
	
	class Card
	{
	public:
		Card();
		Card(Suit, CardValue);
		void SetSuit(Suit s);
		void SetValue(CardValue v);
		operator std::string() const;
		~Card();
	private:
		Suit m_suit;
		CardValue m_value;
	};
}
