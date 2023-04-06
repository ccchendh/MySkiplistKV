#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"

int main() {

    SkipList<int, std::string> skipList(6);
	skipList.insert_element(1, "1"); 
	skipList.insert_element(1, "2"); 
	skipList.insert_element(2, "3"); 
	skipList.insert_element(3, "4"); 
	skipList.insert_element(4, "5"); 
	skipList.insert_element(5, "6"); 
	skipList.insert_element(6, "7"); 

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.dump_file();

    // skipList.load_file();

    skipList.search_element(9);
    skipList.search_element(18);


    skipList.display_list();

    skipList.delete_element(3);
    skipList.delete_element(7);
    skipList.delete_element(20);


    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.display_list();
}
