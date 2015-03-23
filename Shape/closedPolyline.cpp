#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI &iWindowApi) {
	windowAPI = &iWindowApi;
}

void ClosedPolyline::add(const Point & point){
	OpenPolyline::add(point);
}

void ClosedPolyline::setLineColor(const Color &color){
	lineColor = color;
}

Color ClosedPolyline::getLineColor() const{
	return lineColor;
}

void ClosedPolyline::setFillColor(const Color &color){
	fillColor = color;
}

Color ClosedPolyline::getFillColor() const{
	return fillColor;
}

Point ClosedPolyline::getPoint(float index) const{
	if (index >= points.size()){
		throw std::out_of_range("Index trop grand");
	}

	return points.at(index);
}

unsigned int ClosedPolyline::getNumberOfPoints() const{
	return points.size();
}

void ClosedPolyline::draw(){

}