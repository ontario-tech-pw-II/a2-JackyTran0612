int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	if (argc == 3)
	{
	}
	else
	{
		cerr << " There are not enough arguments!" << endl;
		return 1;
	}
	// check if there are enough arguments
	fin.open(argv[1]);
	
	// open the first file
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	fin.open(argv[2])
 	
	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 
