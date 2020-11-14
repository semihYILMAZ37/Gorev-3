#include <iostream>
#include <vector>
#include <cstdint>

#define DEBUG(cc) std::cout << #cc << " = \n" << cc << std::endl;

// print uint8_t in hexadecimal
std::ostream& operator << (std::ostream& os, const uint8_t& u)
{
	printf("%02X", u);
	return os;
}

// print vector container elements
template <class T>
std::ostream& operator << (std::ostream& os, const std::vector<T>& v)
{
	for (unsigned i=0; i<v.size(); i++)
	{
		os << v[i];
		if (i != v.size() - 1)
			os << " ";
	}
	return os;
}

// print matrix container elements
template <class T>
std::ostream& operator << (std::ostream& os, const std::vector< std::vector<T> >& M)
{
	for (unsigned i=0; i<M.size(); i++)
		os << M[i] << "\n";
	return os;
}

using namespace std;

template <class T>
vector< vector<T> > create_matrix(T x, int rows, int cols)
{
	vector< vector<T> > M(rows);
	for (int i=0; i<rows; i++)
	{
		M[i].resize(cols);
		for (int j=0; j<cols; j++)
			M[i][j] = x;
	}
	return M;
}

int main()
{
	int k = 'k';
	printf("%c is %d\n\n", k, k);
	
	auto ch_mat = create_matrix((char)k, 3, 4);
	auto int_mat = create_matrix((int)k, 3, 4);
	auto uint8_mat = create_matrix((uint8_t)k, 3, 4);
	
	DEBUG(ch_mat)
	DEBUG(int_mat)
	DEBUG(uint8_mat)
	
	return 0;
}
