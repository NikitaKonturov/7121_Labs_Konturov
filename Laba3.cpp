#include <iostream>
int main(){
	int lenArr = 0;
	while (lenArr <=  0){
		std::cout << "Enter lenght array = ";
		std::cin >>  lenArr;
	}
	int* arr = new int[lenArr];
	for (int i = 0; i < lenArr; ++i){
		int num = 0;
		while(num <= 0){
			std::cin >> num;
			arr[i] = num;
		}
	}
	int maxNum = arr[0];
	int numerMaxEl = 0;
	int MinEll = arr[0];
	for (int i = 1; i < lenArr; ++i){
		if (maxNum < arr[i]){
			maxNum = arr[i];
		}
		if (MinEll > arr[i]){
		MinEll = arr[i];
		}


	}
	for (int i = 0; i < lenArr; ++i){
		if (maxNum == arr[i]){
			std::cout << "Max element has index = "  << i << '\n';
		}
	}
	if(MinEll == 1){
		MinEll++;
		for(int i = 0; i < lenArr; i++){
			if(MinEll == arr[i]){
				MinEll++;
			}
		}
	}



	std::cout << "Minimum  number, who not in massiv is it = " <<  MinEll - 1 << '\n';

	int* new_arr = new int[lenArr];
	
	int number_sort = 0;
		while (number_sort <= 0){
			std::cout << "Enter sort number = ";
			std::cin >> number_sort;
		}
	int quvontity = 0;
	for (int i = 0; i < lenArr; ++i){
		if (arr[i] < number_sort){
			new_arr[quvontity] = arr[i];
			quvontity++;
			}
	
	}	
	for (int i = 0; i < lenArr; ++i){
		if (arr[i] >= number_sort){
			new_arr[quvontity] = arr[i];
			quvontity++;
		}

	}
	for (int i = 0; i < lenArr; ++i){
		std::cout << new_arr[i] << '\t';

}
	return 0;

}
	
