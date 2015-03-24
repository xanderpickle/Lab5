#include "stdafx.h"

using namespace ShapeLibrary;



ClosedPolyline::ClosedPolyline(IWindowAPI &iWindowApi) : OpenPolyline(iWindowApi) {
	
}

ClosedPolyline::~ClosedPolyline(){

}

void ClosedPolyline::draw(){
	if (points.size() < 3){
		throw std::runtime_error("Pas assez de points");
	}
	OpenPolyline::draw();
	windowAPI->drawLine(points.at(points.size() - 1), points.at(0));
}