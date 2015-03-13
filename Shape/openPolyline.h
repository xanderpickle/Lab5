#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(const IWindowAPI & iWindowApi);
		virtual ~OpenPolyline();
		virtual void add(const Point &point);
		virtual void draw();
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
