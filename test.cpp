//33333
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream input_file(argv[1]);
	ofstream output_file(argv[2]);

	char ch;
    while(!input_file.eof())  
    {
        input_file.get(ch);  
        if(input_file.fail()) break;  // 입력 파일 스트림에 에러비트가 존재한다면 루프를 빠져나감
		if(ch == 0x0A) 
		{
			output_file << "\n";
			cout << "sss";
		}
		else
			output_file<< ch;
	}
	input_file.close();
	output_file.close();
}
