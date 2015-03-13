#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(const IWindowAPI & iWindowApi);
		virtual ~Shape();
		virtual void add(const Point &point);
		virtual void draw() = 0;
		virtual void setLineColor(const Color &lineColor);
		virtual Color getLineColor() const;
		virtual void setFillColor(const Color &fillColor);
		virtual Color getFillColor() const;
		virtual Point getPoint(float index) const;
		virtual unsigned int getNumberOfPoints() const;
	private:
		IWindowAPI * windowAPI;
		vector<Point> points;
		Color lineColor;
		Color fillColor;
	};
}
