#include <iostream>
#include <chrono>
#include <unistd.h>
int main(){
    std::chrono::milliseconds startMs = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    );
	sleep(1);
    std::chrono::milliseconds endMs = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()
    );
    std::cout << endMs.count() - startMs.count() << std::endl;
    return 0;
}
