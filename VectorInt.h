#pragma once

class VectorInt;
class VectorInt
{
public:
	VectorInt();
	VectorInt(int row, int col);
	~VectorInt();

	bool operator<(const VectorInt & rhs) const;
	bool operator>=(const int &rhs) const;


	int gridDistance(const VectorInt & rhs) const;
	int euklideanDistance(const VectorInt & rhs) const;



	VectorInt& operator+=(const VectorInt & rhs);
	VectorInt& operator-=(const VectorInt & rhs);
	VectorInt& operator+=(const int & rhs);
	VectorInt& operator-=(const int & rhs);
	VectorInt& operator*=(const int & rhs);

	VectorInt operator+(VectorInt rhs) const;
	VectorInt operator-(VectorInt rhs) const;
	VectorInt operator*(const int & rhs);

	int row, col;

private:

};

namespace vec //Ikke kall denne vector, konflikt med vector
{

	const VectorInt UP(-1, 0);
	const VectorInt DOWN(1, 0);
	const VectorInt RIGHT(0, 1);
	const VectorInt LEFT(0, -1);

	//TODO
	const VectorInt LARS(-4, 3);
}