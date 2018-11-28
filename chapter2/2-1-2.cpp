#include <iostream>
#include <chrono>
#include <type_traits>
#include <unistd.h>

void insert_sort(int* array, int arr_length);

int main(){
    std::chrono::microseconds startMs = std::chrono::duration_cast< std::chrono::microseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    );
	//sleep(1000);
	int tc_arr[6] = {5,2,4,6,1,3};
    int length = std::extent<decltype(tc_arr),0>::value;
    std::cout << "Origin array" << std::endl;
    for (int i = 0; i < 6; ++i){
        std::cout << tc_arr[i] << " ";
    }
    std::cout << std::endl;
    insert_sort(tc_arr, length);
    std::cout << "After insert sort" << std::endl;
    for (int i = 0; i < 6; ++i){
		std::cout << tc_arr[i] << " ";
	}
	std::cout << std::endl;
    std::chrono::microseconds endMs = std::chrono::duration_cast< std::chrono::microseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    );
    std::cout << endMs.count() - startMs.count() << std::endl;
    return 0;
}

void insert_sort(int* array, int arr_length){
	for(int i = 1; i < arr_length; ++i){
		int key = array[i];
		// insert key into sorted array[1, j-1]
		int j = i-1;
		while(j >= 0 && array[j] < key){
			array[j+1] = array[j];
            --j;
		}
        array[j+1]=key;
	}
}
