#include "SimpleDeck.h"

namespace Models {

	SimpleDeck::~SimpleDeck()
	{
	}

	Card SimpleDeck::DrawCard()
	{
		return Card();
	}

	void SimpleDeck::Generate()
	{
		m_generator->Generate(m_cards, m_size);
	}
}
