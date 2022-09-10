#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int a, b, c, match;
	fstream fin("triangle.txt", ios::in);
	fstream fout("triangleResult.txt", ios::out);
	
	if(!fin.is_open())
	{
		fout<<"File triagle.txt khong kha dung";
	}
	else{
		fin >> a;
		fin >> b;
		fin >> c;
		
		match = 0;
		if(a == b)
			match = match + 1;
		if(a == c)
			match = match + 2;
		if(b == c)
			match = match + 3;
		if(match == 0)
			if((a+b) <= c)
				fout<<"Khong tao duoc tam giac tu a,b,c";
			else if((b+c) <= a)
				fout << "Khong tao duoc tam giac tu a,b,c";
			else if((a+c) <= b) 
				fout <<"Khong tao duoc tam giac tu a,b,c";
			else printf("Tao duoc tam giac tu a,b,c");
		else
		if(match == 1)
			if((a+c) <= b)
				fout <<"Khong tao duoc tam giac tu a,b,c"; 
			else fout <<"Tam giac can tai C";
		else
		if(match == 2) 
			if((a+c) <= b)
				fout <<"Khong tao duoc tam giac tu a,b,c"; 
			else fout <<"Tam giac can tai B";
		else if(match == 3)
			if((b+c) <= a)
				fout <<"Khong tao duoc tam giac tu a,b,c";
			else
				fout <<"Tam giac can tai A";
		else fout <<"Tam giac deu";
		return 0;
	}
	
	fin.close();
	fout.close();	
}
