#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI &iWindowApi) {
	windowAPI = &iWindowApi;
}

void Circle::add(const Point & point){
	Shape::add(point);
}

void Circle::setLineColor(const Color &color){
	lineColor = color;
}

Color Circle::getLineColor() const{
	return lineColor;
}

void Circle::setFillColor(const Color &color){
	fillColor = color;
}

Color Circle::getFillColor() const{
	return fillColor;
}

Point Circle::getPoint(float index) const{
	if (index >= points.size()){
		throw std::out_of_range("Index trop grand");
	}

	return points.at(index);
}

unsigned int Circle::getNumberOfPoints() const{
	return points.size();
}

void Circle::draw(){

}