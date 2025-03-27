#pragma once

#include <vector>

using std::vector;

class PrimeFactor
{
public:
	vector<int> of(int num)
	{
		vector<int> result = { };
		if (num <= 1) { return result; }

		for (int dividor = 2; num > 1; dividor++)
		{
			while (num % dividor == 0)
			{
				result.push_back(dividor);
				num /= dividor;
			}
		}

		return result;
	}
private:

};