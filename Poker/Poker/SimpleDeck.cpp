#include "SimpleDeck.h"

namespace Models {

	SimpleDeck::~SimpleDeck()
	{
	}

	void SimpleDeck::Generate()
	{
		m_generator.Generate(m_cards, m_size);
	}
}
