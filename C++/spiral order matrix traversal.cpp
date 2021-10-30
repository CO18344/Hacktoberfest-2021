#include<iostream>
using namespace std;

int main(){
	cout<<"Hello World....\n";

	int arr[5][6]= {
		1,5,7,9,10,11,
		6,10,12,13,20,21,
		9,25,29,30,32,41,
		15,55,59,63,68,70,
		40,70,79,81,95,105
	};

	int row_begin = 0;
	int row_end = 4;

	int col_begin = 0;
	int col_end = 5;

	while(row_begin<=row_end and col_begin<=col_end){
		cout<<row_begin<<","<<col_begin<<":"<<row_end<<","<<col_end<<"\n";

		for(int j = col_begin;j<=col_end;j++)
			cout<<arr[row_begin][j]<<" ";
		cout<<"\n";

		row_begin++;
		for(int i = row_begin;i<=row_end;i++)
			cout<<arr[i][col_end]<<" ";
		cout<<"\n";

		col_end--;
		for(int j=col_end;j>=col_begin;j--)
			cout<<arr[row_end][j]<<" ";
		cout<<"\n";

		row_end--;
		for(int i = row_end;i>=row_begin;i--)
			cout<<arr[i][col_begin]<<" ";
		cout<<"\n";

		col_begin++;
		cout<<row_begin<<","<<col_begin<<":"<<row_end<<","<<col_end<<"\n";

	}
	return 0;
}