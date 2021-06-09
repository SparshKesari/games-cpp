#include<iostream>
using namespace std;

char martrix[3][3]={'1','2','3','4','5','6','7','8','9'};

void Draw(){
for(int i = 0; i<3;i++)
{
	for(int j = 0; j<3;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
}
}

int main(){
	
	return 0;
}
