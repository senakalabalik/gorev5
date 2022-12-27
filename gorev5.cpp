#include <iostream>
#include <fstream>
#include <vector>
int main() {
	
	std::ifstream MyBFile("b.txt");
	std::vector<int>bVector;
	
	if (MyBFile) {        
    int value;

    while ( MyBFile >> value ) {
        bVector.push_back(value);
     }
	}	 

	std::ifstream MyAFile("A.txt");
	std::vector<std::vector<int> >Amatrix;
	std::vector<int>Avector ;
	
	if (MyAFile) {        
    int val;
  
    while ( MyAFile >> val ) {
		Avector.push_back(val) ;
		if (Avector.size()==bVector.size()) {
			Amatrix.push_back(Avector) ;
			Avector.clear() ;
		}
		else {			
		}
	 }
	}

 for (int i=0; i<bVector.size(); i++) {
		std::cout << bVector[i] ;
		std::cout << "\n" ;
	}
 for (int i=0; i<Amatrix.size(); i++) {
	for (int j=0; j<Amatrix[i].size(); j++) {
		std::cout << Amatrix[i][j] << " ";
	}
	std::cout << "\n" ;
	}
}
