#pragma once

#include "Human.hpp"
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
	vector<char> vec;

	for (auto rit = people.rbegin(); rit != people.rend(); rit++) 
	{
		rit->birthday();

        if (rit->isMonster())
		{
			vec.push_back('n');
		}
		else if (!(rit->isMonster()))
		{
			vec.push_back('y');
		}
	}
	return {vec};
}
