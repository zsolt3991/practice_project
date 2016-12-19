#pragma once
#include "BaseDeck.h"
namespace Models 
{
	class SimpleDeck : public BaseDeck
	{
	public:
		SimpleDeck(IDeckGenerator a_generator, int a_size) :BaseDeck(a_generator, a_size) {};
		~SimpleDeck();
		void Generate()override;
	};
}

