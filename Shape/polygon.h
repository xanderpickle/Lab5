#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Polygon : public ClosedPolyline
	{
	public:
		Polygon(IWindowAPI & iWindowApi);
		~Polygon();
		
		void draw();
		
	private:
		
	};
}
