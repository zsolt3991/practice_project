#pragma once
#include <vector>
#include <map>


template<template <typename...> class MAP, class KEY, class VALUE>
std::vector<KEY> keys(const MAP<KEY, VALUE>& map)
{
	std::vector<KEY> result;
	result.reserve(map.size());
	for (const auto& it : map) {
		result.emplace_back(it.first);
	}
	return result;
}

template<template <typename...> class MAP, class KEY, class VALUE>
std::vector<VALUE> values(const MAP<KEY, VALUE>& map)
{
	std::vector<VALUE> result;
	result.reserve(map.size());
	for (const auto& it : map) {
		result.emplace_back(it.second);
	}
	return result;
}