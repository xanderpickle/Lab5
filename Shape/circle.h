#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Circle : public Shape
	{
	public:
		Circle(IWindowAPI & iWindowApi);
		~Circle();
		void add(const Point &point);
		void draw();
		void setLineColor(const Color &color);
		Color getLineColor() const;
		void setFillColor(const Color &color);
		Color getFillColor() const;
		Point getPoint(float index) const;
		unsigned int getNumberOfPoints() const;
	private:
		IWindowAPI * windowAPI;
		vector<Point> points;
		Color lineColor;
		Color fillColor;
	};
}
