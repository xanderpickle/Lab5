#include "stdafx.h"

using namespace ShapeLibrary;


Shape::Shape(IWindowAPI & iWindowApi){
	windowAPI = &iWindowApi;
}

Shape :: ~Shape(){

}

void Shape::add(const Point &point){
	points.push_back(point);
}

void Shape::setLineColor(const Color &color){
	lineColor = color;
}

Color Shape::getLineColor() const{
	return lineColor;
}

void Shape::setFillColor(const Color &color){
	fillColor = color;
}

Color Shape::getFillColor() const{
	return fillColor;
}

Point Shape::getPoint(float index) const{
	if (index >= points.size()){
		throw std::out_of_range("Index trop grand");
	}

	return points.at(index);
}

unsigned int Shape::getNumberOfPoints() const{
	return points.size();
}

