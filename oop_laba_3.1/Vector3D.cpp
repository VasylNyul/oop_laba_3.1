#include "Vector3D.h"

#pragma once

using namespace std;

Vector3D::Vector3D(const Vector3D& t)
{
	int a = t.get_x();
	int b = t.get_y();
	int c = t.get_z();
	set_x(a);
	set_y(b);
	set_z(c);
}

ostream& operator << (ostream& out, const Vector3D& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Vector3D& f)
{
	int a, b, c;
	cout << endl;
	cout << "x = "; in >> a;
	cout << "y = "; in >> b;
	cout << "z = "; in >> c;
	f.set_x(a); f.set_y(b); f.set_z(c);
	return in;
}

Vector3D::operator string() const
{
	stringstream ss;

	ss << "(" << get_x() << ", " << get_y() << ", " << get_z() << ")" << endl;

	return ss.str();
}

Vector3D operator + (const Vector3D& o, const Vector3D& u)
{
	Vector3D s;
	int a = o.get_x() + u.get_x();
	int b = o.get_y() + u.get_y();
	int c = o.get_z() + u.get_z();

	s.set_x(a);
	s.set_y(b);
	s.set_z(c);

	return s;
}

int operator * (const Vector3D o, const Vector3D u)
{

	int a = o.get_x() * u.get_x();
	int b = o.get_y() * u.get_y();
	int c = o.get_z() * u.get_z();

	int s = a + b + c;

	return s;
}

