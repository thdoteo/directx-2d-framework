#pragma once

#include "shape.h"

class S2DQuad :
	public Shape
{
public:
	S2DQuad(double, double,
		double, double,
		double, double,
		double, double,
		FloatColor*);
};

class S2DRectangle :
	public S2DQuad
{
public:
	S2DRectangle(double,
		double,
		double,
		double,
		FloatColor*);
};

class S2DDiamond :
	public S2DQuad
{
public:
	S2DDiamond(double,
		double,
		double,
		double,
		FloatColor*);
};

class S2DLine : public S2DQuad
{
public:
	double x1, y1;
	S2DLine(double, double, double, double, double, FloatColor*);
};

