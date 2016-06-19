#include "VectorInt.h"
#include <algorithm>


VectorInt::VectorInt() : row(0), col(0)
{
}

VectorInt::VectorInt(int row, int col) : row(row), col(col)
{
}


VectorInt::~VectorInt()
{

}

bool VectorInt::operator<(const VectorInt & rhs) const
{
	return row < rhs.row && col < rhs.col;
}

bool VectorInt::operator>=(const int &rhs) const
{
	return row >= rhs && col >= rhs;
}


int VectorInt::gridDistance(const VectorInt & rhs) const
{
	return abs(rhs.row - row) + abs(rhs.col - rhs.col);
}

int VectorInt::euklideanDistance(const VectorInt & rhs) const
{
	return sqrt(pow(rhs.row - row, 2) + pow(rhs.col - rhs.col, 2));
}

VectorInt VectorInt::operator+(VectorInt rhs) const
{
	rhs += *this;
	return rhs;
}

VectorInt VectorInt::operator-(VectorInt rhs) const
{
	rhs -= *this;
	return rhs;
}

VectorInt VectorInt::operator*(const int & rhs)
{
	return VectorInt(row * rhs, col*rhs);
}

VectorInt& VectorInt::operator+=(const VectorInt & rhs)
{
	col += rhs.col;
	row += rhs.row;
	return *this;
}
VectorInt& VectorInt::operator-=(const VectorInt & rhs)
{
	col -= rhs.col;
	row -= rhs.row;
	return *this;
}

VectorInt & VectorInt::operator+=(const int & rhs)
{
	row += rhs;
	col += rhs;
	return *this;
}

VectorInt & VectorInt::operator-=(const int & rhs)
{
	row -= rhs;
	col -= rhs;
	return *this;
}

VectorInt & VectorInt::operator*=(const int & rhs)
{
	row *= rhs;
	col *= rhs;
	return *this;
}
