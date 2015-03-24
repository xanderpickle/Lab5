#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : public Shape
	{
	public:
		Rectangle(IWindowAPI & iWindowApi);
		~Rectangle();
		void draw();
		void setPosition(const Point & point);
		Point getPosition() const;
		void setHeight(int value);
		int getHeight() const;
		void setWidth(int value);
		int getWidth() const;
	private:
		int height;
		int width;
		Point position;
	};
}