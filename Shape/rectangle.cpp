#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI &iWindowApi) : Shape(iWindowApi) {

}



Rectangle::~Rectangle(){
	
}

void Rectangle::setPosition(const Point & point){
	position = point;
}

Point Rectangle::getPosition() const{
	return position;
}

void Rectangle::setHeight(int value){
	if (value < 0){
		throw std::invalid_argument("Valeur trop petite");
	}
	height = value;
}

int Rectangle::getHeight() const {
	return height;
}

void Rectangle::setWidth(int value){
	if (value < 0){
		throw std::invalid_argument("Valeur trop petite");
	}
	width = value;
}

int Rectangle::getWidth() const {
	return width;
}



void Rectangle::draw(){
	windowAPI->setDrawingColor(lineColor);
	windowAPI->drawRectangle(position, width, height);
	windowAPI->setDrawingColor(fillColor);
	windowAPI->fillRectangle(position, width, height);
}

