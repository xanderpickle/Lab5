#include "stdafx.h"

using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI &iWindowApi) {
	windowAPI = &iWindowApi;
}

void Polygon::add(const Point & point){
	ClosedPolyline::add(point);
}

void Polygon::setLineColor(const Color &color){
	lineColor = color;
}

Color Polygon::getLineColor() const{
	return lineColor;
}

void Polygon::setFillColor(const Color &color){
	fillColor = color;
}

Color Polygon::getFillColor() const{
	return fillColor;
}

Point Polygon::getPoint(float index) const{
	if (index >= points.size()){
		throw std::out_of_range("Index trop grand");
	}

	return points.at(index);
}

unsigned int Polygon::getNumberOfPoints() const{
	return points.size();
}

void Polygon::draw(){

}
