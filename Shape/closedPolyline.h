#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public OpenPolyline
	{
	public:
		ClosedPolyline(IWindowAPI & iWindowApi);
		virtual ~ClosedPolyline();
		virtual void add(const Point &point);
		virtual void draw();
		virtual void setLineColor(const Color &color);
		virtual Color getLineColor() const;
		virtual void setFillColor(const Color &color);
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