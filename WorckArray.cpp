#include <iostream>

int main(){
	std::cout << "Enter x, y";
	int x, y;
	std::cin >> x >> y;
	int **matrix = new int*[x];

	for (int ii = 0; ii < x; ++ii){
		matrix[ii] = new int[y];
}
	for (int i = 0; i < x; ++i){
		for (int j = 0; j < y; ++j){
			matrix[i][j] = i + j;

}
}
	for (int i = 0; i < x; ++i){
		for (int j = 0; j < y; ++j){
			std::cout << matrix[i][j] << '\t';
		}
		std::cout << ']' << '\n';		
	}
return 0;
}
