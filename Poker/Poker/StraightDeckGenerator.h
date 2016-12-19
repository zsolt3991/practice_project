#pragma once
#include "IDeckgenerator.h"

using namespace Models;

namespace Logic {

	class StraightDeckGenerator :
		public IDeckGenerator
	{
	public:
		StraightDeckGenerator();
		~StraightDeckGenerator();
		void Generate(std::vector<Card>& a_target, int a_count) override;
	};
}

