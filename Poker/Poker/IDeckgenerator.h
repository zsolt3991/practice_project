#pragma once
#include"Card.h"
#include<vector>
using namespace Models;

namespace Logic
{

	class IDeckGenerator 
	{
	public:
		virtual void Generate(std::vector<Card>& a_target, int a_count) {};
		~IDeckGenerator() {};
	};
}