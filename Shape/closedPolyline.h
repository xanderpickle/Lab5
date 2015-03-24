#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public OpenPolyline
	{
	public:
		ClosedPolyline(IWindowAPI & iWindowApi);
		virtual ~ClosedPolyline();
		
		virtual void draw();
		
	private:
	
	};
}