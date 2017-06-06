#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc,char* argv[])
{
	
	ifstream in;
	ofstream out;
	char FileName[] = "A.cpp";
	if (argc !=2){
		cout<<"Input error"<<endl;
		cout<<"Please input like this: creat num"<<endl;
		return -1;
	}
	int num = atoi(argv[1]);
	if (num > 15){
		cout<<"Too much files"<<endl;
		return -1;
	}
	for (int i = 0;i < num;i++){
		FileName[0] = 'A' + i;
		in.open("/path");
		if (!in.is_open()){cout<<"MODEL.cpp loss"<<endl; return -1;}
		out.open(FileName);
		char temp[305];
		while (in.getline(temp,300))
			out<<temp<<endl;
		in.close();
		out.close();
	}

	return 0;
}
