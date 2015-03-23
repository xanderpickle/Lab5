#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI &iWindowApi) {
	windowAPI = &iWindowApi;
}

void OpenPolyline::add(const Point & point){
	Shape::add(point);
}

void OpenPolyline::setLineColor(const Color &color){
	lineColor = color;
}

Color OpenPolyline::getLineColor() const{
	return lineColor;
}

void OpenPolyline::setFillColor(const Color &color){
	fillColor = color;
}

Color OpenPolyline::getFillColor() const{
	return fillColor;
}

Point OpenPolyline::getPoint(float index) const{
	if (index >= points.size()){
		throw std::out_of_range("Index trop grand");
	}

	return points.at(index);
}

unsigned int OpenPolyline::getNumberOfPoints() const{
	return points.size();
}

void OpenPolyline::draw(){
	
}