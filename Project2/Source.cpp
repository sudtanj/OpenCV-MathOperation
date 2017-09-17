#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>
void min_matrix(int** matrix, int size);
void max_matrix(int** matrix, int size);
void average_matrix(int** matrix, int size);
int main()
{
	int rowCount = 3, colCount = 3;
	int** matrix = new int*[rowCount];
	for (int i = 0; i < rowCount; ++i)
		matrix[i] = new int[colCount];

	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 3;
	matrix[1][0] = 4;
	matrix[1][1] = 5;
	matrix[1][2] = 6;
	matrix[2][0] = 7;
	matrix[2][1] = 8;
	matrix[2][2] = 9;

	average_matrix(matrix, 3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}

	system("pause");
	return(0);
}

void min_matrix(int** matrix, int size) {
	std::vector<int> temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			temp.push_back(matrix[i][j]);
		}
	}
	sort(temp.begin(), temp.end());
	int sizing = ceil((double)size / 2)-1;
	matrix[sizing][sizing] = temp.at(0);
	
}

void max_matrix(int** matrix, int size) {
	std::vector<int> temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			temp.push_back(matrix[i][j]);
		}
	}
	sort(temp.begin(), temp.end());
	int sizing = ceil((double)size / 2) - 1;
	matrix[sizing][sizing] = temp.back();

}

void average_matrix(int** matrix, int size) {
	std::vector<int> temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			temp.push_back(matrix[i][j]);
		}
	}
	sort(temp.begin(), temp.end());
	int sizing = ceil((double)size / 2) - 1;
	matrix[sizing][sizing] = temp.at(floor((double)temp.size()/2));

}