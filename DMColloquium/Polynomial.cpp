//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"
using namespace std;
Polynomial::Polynomial() {
    coefficients = vector<RationalNumber>(1);
}

RationalNumber Polynomial::LED_P_Z()
{
	if (!coefficients.empty())
		return coefficients.back(); // do something about it
	else
	{
		RationalNumber X;
		return X;
	}
}