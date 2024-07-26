#include<iostream>
#include<string>
using namespace std;

void print(char arr [3][3])
{
	system("cls");
	//int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	
	for (int i=0 ; i<3 ;i++)  
	{
		cout << "_____________" << endl<<"|";
		for (int j = 0; j < 3; j++)
		{
			cout <<" " << arr[i][j]<< " |";
		}

		cout << endl;
	}
	cout << "_____________";
}
void play(char arr[3][3], char & player)
{
	char input;

		cout << endl << "\n Enter the number of the place you want to play in player " << player << " : ";
		cin >> input;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (input == arr[i][j])
			{
				arr[i][j] = player;
			}
		}
	}
	if (player == 'x')
	{
		player = 'o';
	}
	else
	{
		player = 'x';

	}
}
int check(char arr[3][3])
{
	int counter=0;

	if (arr[0][0] == 'x' && arr[0][1] == 'x' && arr[0][2] == 'x' ||
		arr[1][0] == 'x' && arr[1][1] == 'x' && arr[1][2] == 'x' ||
		arr[2][0] == 'x' && arr[2][1] == 'x' && arr[2][2] == 'x' ||
		arr[2][0] == 'x' && arr[1][0] == 'x' && arr[0][0] == 'x' ||
		arr[2][1] == 'x' && arr[1][1] == 'x' && arr[0][1] == 'x' ||
		arr[0][2] == 'x' && arr[1][2] == 'x' && arr[2][2] == 'x' ||
		arr[0][0] == 'x' && arr[1][1] == 'x' && arr[2][2] == 'x' ||
		arr[0][2] == 'x' && arr[1][1] == 'x' && arr[2][0] == 'x')
	{
		return 2;
	}

else if (arr[0][0] == 'o' && arr[0][1] == 'o' && arr[0][2] == 'o' ||
	arr[1][0] == 'o' && arr[1][1] == 'o' && arr[1][2] == 'o' ||
	arr[2][0] == 'o' && arr[2][1] == 'o' && arr[2][2] == 'o' ||
	arr[2][0] == 'o' && arr[1][0] == 'o' && arr[0][0] == 'o' ||
	arr[2][1] == 'o' && arr[1][1] == 'o' && arr[0][1] == 'o' ||
	arr[0][2] == 'o' && arr[1][2] == 'o' && arr[2][2] == 'o' ||
	arr[0][0] == 'o' && arr[1][1] == 'o' && arr[2][2] == 'o' ||
	arr[0][2] == 'o' && arr[1][1] == 'o' && arr[2][0] == 'o')
	{
		return 1;
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 'x' || arr[i][j] == 'o')
				counter++;
		}
	}
 if (counter >= 9)
	{
	 return 3;
	}
 

	return 0;


}
void main()
{
	
	int checker ;
	
	char player = 'x';
	int counter=0;
		//(b = true ? 'x' : 'o');
	char arr[3][3] = { '1','2','3','4','5','6','7','8','9' };	
	check(arr);
	do
	{
		
		print(arr);
		play (arr,player);
		check(arr);
		
	} while (check(arr) == 0);
	if (check(arr) == 2)
	{
		cout << "\n The winner is player : x \n";
	}
	else if (check(arr) == 1)
	{
		cout << "\n The winner is player : o \n";
	}
	else if (check(arr) == 3)
	{
		cout << "\n draw no one won \n";
	}
	cout << "\n Enter any letter to exit : ";
	char bbb;
	cin >> bbb;
}