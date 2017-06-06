#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;
#define MAX_NUM 15
int main(int argc,char* argv[])
{
	
	ifstream in;
	ofstream out;
	char FileName[] = "A.cpp";
	char temp[505];

	if (argc !=2){
		cout<<"Input error"<<endl;
		cout<<"Please input like this: creat num"<<endl;
		return -1;
	}
	for (int i = 0;argv[1][i] != 0;i++){
		if (!isdigit(argv[1][i]) || i >= 9){
			cout<<"Input error!"<<endl;
			cout<<"Please input like this: creat num "<<endl<<"And num must be an intger from 1 to "<<MAX_NUM<<endl;
			return -1;
		}
	}
	int num = atoi(argv[1]);
	if (num > MAX_NUM || num ==0){ //每次生成不多于15个(15个足矣)，防止手残生成太多。。。。
		cout<<"Too much files (0 < num < "<<MAX_NUM<<")"<<endl;
		return -1;
	}

	for (int i = 0;i < num;i++){
		FileName[0] = 'A' + i;
		in.open("MODEL.cpp"); //绝对地址
		if (!in.is_open()){cout<<"Can not find MODEL.cpp"<<endl; return -1;}
		out.open(FileName);
		while (in.getline(temp,500))
			out<<temp<<endl;
		in.close();
		out.close();
	}

	return 0;
}
