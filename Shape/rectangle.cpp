#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI &iWindowApi) {
	windowAPI = &iWindowApi;
}

void Rectangle::add(const Point & point){
	Shape::add(point);
}

void Rectangle::setLineColor(const Color &color){
	lineColor = color;
}

Color Rectangle::getLineColor() const{
	return lineColor;
}

void Rectangle::setFillColor(const Color &color){
	fillColor = color;
}

Color Rectangle::getFillColor() const{
	return fillColor;
}

Point Rectangle::getPoint(float index) const{
	if (index >= points.size()){
		throw std::out_of_range("Index trop grand");
	}

	return points.at(index);
}

unsigned int Rectangle::getNumberOfPoints() const{
	return points.size();
}

void Rectangle::draw(){

}

