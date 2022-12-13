#include <iostream>
#include <vector>

template <typename T>
std::vector<std::vector<T> > create_matrix(T element, int rows, int columns){
	std::vector<std::vector<T> > matrix;
	for(int i =0;i<rows;i++){
		matrix.push_back(std::vector<T> (columns,element));
	}
	return matrix;
}

int main() {
	std::vector<std::vector<int> > myMatrix = create_matrix((int)5,2,3);
	std::vector<std::vector<double> > myMatrix2 = create_matrix(5.5,2,3);
	return 0;
}
