#include "headers/Known/Math/Spline/SplineAbstract.h"

SplineAbstract::SplineAbstract()
{
	this->next = null;
	this->position = 0.0;
	this->argument = 0.0;
	this->repeats = 0;
}

SplineAbstract::~SplineAbstract()
{

}

void SplineAbstract::Reset() {
	this->position = 0.0;
	this->argument = 0.0;
	this->repeats = 0;

	return;
}