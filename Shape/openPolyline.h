#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI & iWindowApi);
		virtual ~OpenPolyline();
		virtual void draw();
	private:
	};
}
