#include "stdafx.h"

using namespace ShapeLibrary;


OpenPolyline::OpenPolyline(IWindowAPI &iWindowApi): Shape(iWindowApi) {

}

OpenPolyline::~OpenPolyline(){
}


void OpenPolyline::draw(){
	if (points.size() < 2){
		throw std::runtime_error("Pas assez de points");
	}
	windowAPI->setDrawingColor(lineColor);
	for (int i = 0; i + 1 < points.size(); i++){
		windowAPI->drawLine(points.at(i), points.at(i + 1));	
	}
}