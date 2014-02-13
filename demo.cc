#include "mnist.h"
#include "rbm.h"
#include "spectrum.inl"
int main(int argc,char*argv[])
{
	if(argc!=4){
		std::cerr << "Usage: " << argv[0] << "<train-simple|train|test> <image-file> <label-file>" << std::endl;
		return -1;
	}
}