#pragma once
#include "BaseDeck.h"
namespace Models 
{
	class SimpleDeck : public BaseDeck
	{
	public:
		SimpleDeck();
		~SimpleDeck();
		void Generate()override;
	};
}

