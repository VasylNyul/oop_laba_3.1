#include "Triad.h"
#include <iostream>
#include <string> 
#include <sstream>
#pragma once

class Vector3D :
	public Triad
{
public:

	Vector3D() :Triad() {}
	Vector3D(const Triad t) : Triad(t) {}
	Vector3D(const Vector3D& t);

	operator string() const;

	friend ostream& operator <<(ostream&, const Vector3D&);
	friend istream& operator >>(istream&, Vector3D&);

	friend Vector3D operator + (const Vector3D&, const Vector3D&);
	friend int operator * (const Vector3D, const Vector3D);

};

