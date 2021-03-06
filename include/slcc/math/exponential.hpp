/**************************************************************
 * Copyright (c) 2008-2009 Daniel Pfeifer                     *
 *                                                            *
 * Distributed under the Boost Software License, Version 1.0. *
 **************************************************************/

#ifndef GLCC_MATH_EXPONENTIAL_HPP
#define GLCC_MATH_EXPONENTIAL_HPP

#include <cmath>
#include <slcc/math/detail/component_wise.hpp>

namespace gl
{
namespace math
{

/**
 * \defgroup exponential Exponential Functions (8.2)
 *
 * These all operate component-wise. The description is per component.
 *
 * \{
 */

//! Returns x raised to the y power, i.e., x y
// Results are undefined if x < 0.
// Results are undefined if x = 0 and y <= 0.
GLCC_COMPONENT_WISE(GLfloat, pow, (GLfloat, x)(GLfloat, y))
{
	return std::pow(x, y);
}

//Returns the natural exponentiation of x, i.e., ex.
GLCC_COMPONENT_WISE(GLfloat, exp, (GLfloat, x))
{
	return std::exp(x);
}

//Returns the natural logarithm of x, i.e., returns the value
//y which satisfies the equation x = ey.
//Results are undefined if x <= 0.
GLCC_COMPONENT_WISE(GLfloat, log, (GLfloat, x))
{
	return std::log(x);
}

//Returns 2 raised to the x power, i.e., \f$ 2^x \f$
GLCC_COMPONENT_WISE(GLfloat, exp2, (GLfloat, x))
{
	return std::pow(2, x);
}

//Returns the base 2 logarithm of x, i.e., returns the value
//y which satisfies the equation x= 2 y
//Results are undefined if x <= 0.
GLCC_COMPONENT_WISE(GLfloat, log2, (GLfloat, x))
{
	return std::log(x) / std::log(2);
}

//! Returns \f$ \sqrt{x} \f$.
//! Results are undefined if x < 0.
GLCC_COMPONENT_WISE(GLfloat, sqrt, (GLfloat, x))
{
	return std::sqrt(x);
}

//! Returns \f$ \frac{1}{\sqrt{x}} \f$.
//! Results are undefined if x <= 0.
GLCC_COMPONENT_WISE(GLfloat, inversesqrt, (GLfloat, x))
{
	return 1.f / std::sqrt(x);
}

/**
 * \}
 */

} // namespace math
} // namespace gl

#undef GLCC_COMPNENT_WISE

#endif /* GLCC_MATH_EXPONENTIAL_HPP */
