#pragma once
#include "Utils.h"
#include <string>
#include <sstream>
#include <memory>

namespace Models {
	
	class Card
	{
	public:
		typedef std::shared_ptr<Card> SharedPtr_T;

		Card();
		Card(Suit, CardValue);
		void SetSuit(Suit s);
		void SetValue(CardValue v);
		//i'd say this isn't a good idea, should use to string instead
		operator std::string() const;
		~Card();
	private:
		Suit m_suit;
		CardValue m_value;
	};
}
