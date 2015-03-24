#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Circle : public Shape
	{
	public:
		Circle(IWindowAPI & iWindowApi);
		~Circle();
	
		void draw();
		
	private:
	
	};
}
