//Hamad Jan
//https://github.com/Hamad-Jan
//This Program Performs Multiple Operations On Two 2x2 Matrix
#include <iostream>

using namespace std;
//Declaring All The Different Function
void equality(int matrixA[][2],int matrixB[][2]);
void sum(int matrixA[][2],int matrixB[][2]);
void sub(int matrixA[][2],int matrixB[][2]);
void maxmin(int matrixA[][2],int matrixB [][2]);
void row_sum(int matrixA[][2],int matrixB[][2]);
void column_sum(int matrixA[][2], int matrixB[][2]);
void sum_diag(int matrixA[][2],int matrixB[][2]);
void trans(int matrixA[][2],int matrixB[][2]);

main()
{	
	int max,min,p,l,m,n,total=0;	
	int matrixA[2][2];
	do
	{
	cout<<"Enter Values For A 2x2 Matrix A"<<endl;
	cout<<"---------------------------------|";
	cout<<endl;
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++){
	cout<<"Enter Value Of Row "<<i+1<<" Column "<<j+1<<" For Matrix A: ";
	cin>>matrixA[i][j];
	}
	}
	int i = 0;
	int matrixB[2][2];
	cout<<"-----------------------------------------------------------------------";
	cout<<endl;
	cout<<"Enter Values For A 2x2 Matrix B"<<endl;
	cout<<"---------------------------------|";
	cout<<endl;
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++){
		cout<<"Enter Value Of Row "<<i+1<<" Column "<<j+1<<" For Matrix B: ";
		cin>>matrixB[i][j];
		}
	}
	int j = 0;
	cout<<"-----------------------------------------------------------------------";
	cout<<endl;
	//Calling All The Functions
	equality(matrixA,matrixB);
	cout<<"-------------------------------------|"<<endl;
	sum(matrixA,matrixB);
	cout<<"-------------------------------------|"<<endl;
	cout<<"|Maximum & Minimum Value Of Matrix A & B|\n";
	maxmin(matrixA,matrixB);
	cout<<"-------------------------------------|"<<endl;
	cout<<"|Rows Sum Of Matrix A & B|\n\n";
	row_sum(matrixA,matrixB);
	cout<<"-------------------------------------|"<<endl;
	cout<<"|Column Sum Of Matrix A & B|\n\n";
	column_sum(matrixA,matrixB);
	cout<<"-------------------------------------|"<<endl;;
	cout<<"|Diagnoal Sum Of Matrix A & B|\n\n";
	sum_diag(matrixA,matrixB);
	cout<<"-------------------------------------|"<<endl;
	trans(matrixA,matrixB);
	cout<<"--------------------------------------------------------------------------------|";
	cout<<"\nPress 1 If You Want To Go Again: ";
	cin>>n;
	}while(n == 1);
	return 0;
}

void equality(int matrixA[][2],int matrixB[][2]){		//A Function To Check For Quality
int flag = 0;
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		if(matrixA[i][j] != matrixB[i][j])
		{
		flag = 1;
		}
	}
}
	if (flag == 1)
	cout <<"Matrix A And Matrix B are Not Equal";
	else
	cout <<"Matrix A And Matrix B are Equal";
	cout<<endl;
}

void sum(int matrixA[][2],int matrixB[][2]){		//A Function To Find The Sum Of Both Matrices
int sum[2][2];
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		sum[i][j]=matrixA[i][j]+matrixB[i][j];
	}
}
cout<<"Sum Of Matrix A And Matrix B Is"<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<sum[i][j]<<" ";
			if(j==2-1)
			cout<<endl;
		}
	}
}

void sub(int matrixA[][2],int matrixB[][2]){		//A Function To Find The Difference Of Both Matrices
int sub[2][2];
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		sub[i][j]=matrixA[i][j]-matrixB[i][j];
	}
}
cout<<"-----------------------------------------------------------------------"<<endl;
cout<<"Difference Between Matrix A And Matrix B Is"<<endl;
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		cout<<sub[i][j]<<" ";
			if(j==2-1)
			cout<<endl;
		}
	}
}

void maxmin(int matrixA[][2],int matrixB [][2]){			//A Function To Find The Max % Min Values Of Both Matrices		
int x = matrixA[0][0];
int c = matrixA[0][0];
int v = matrixB[0][0];
int b = matrixB[0][0];
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		if(matrixA[i][j]>x)
		x = matrixA[i][j];
		else if (matrixA[i][j]<c)
		c = matrixA[i][j];
	}
}
cout<<"\nLargest Value In Matrix A: "<<x<<endl;
cout<<"Smallest Value In Matrix A: "<<c<<endl;
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		if(matrixB[i][j]>v)
		v = matrixB[i][j];
		else if (matrixB[i][j]<b)
		b = matrixB[i][j];
	}
}
cout<<"Largest Value In Matrix B: "<<v<<endl;
cout<<"Smallest Value In Matrix B: "<<b<<endl;
}

void row_sum(int matrixA[][2],int matrixB[][2]){		//A Function To FInd Sum Of Rows
int sumA = 0,sumB = 0;
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		sumA += matrixA[i][j];
	}
cout<<"Sum Of Row "<<i+1<<" Of Matrix A : "<<sumA<<endl;
sumA = 0;
}

for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		sumB += matrixB[i][j];
	}
	cout<<"Sum Of Row "<<i+1<<" Of Matrix B : "<<sumB<<endl;
	sumB = 0;
}
}
void column_sum(int matrixA[][2], int matrixB[][2])			
{		
int sumA = 0,sumB = 0;
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
	sumA += matrixA[j][i];
	}
cout<<"Sum Of Column "<<i+1<<" Of Matrix A : "<<sumA<<endl;
sumA = 0;
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		sumB += matrixB[j][i];
	}
cout<<"Sum Of Column "<<i+1<<" Of Matrix B : "<<sumB<<endl;
sumB = 0;
}
}

void sum_diag(int matrixA[][2],int matrixB[][2]){		//A Function To Find The Sum Of Both Diagonals
int sum_leftA = 0,sum_rightA = 0;
int sum_leftB = 0,sum_rightB = 0;
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
	matrixA[i][j];
	if(i==j)
	sum_leftA += matrixA[i][j];
	if((i+j) == 2-1)
	sum_rightA += matrixA[i][j];
	}
}
cout <<"Sum of Left Diagonal Of Matrix A : "<<sum_leftA<<endl;
cout <<"Sum of Right Diagonal Of Matrix A : "<<sum_rightA<<endl;

for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
	matrixB[i][j];
	if(i==j)
	sum_leftB += matrixB[i][j];
	if((i+j) == 2-1)
	sum_rightB += matrixB[i][j];
	}
}
cout <<"Sum of Left Diagonal Of Matrix B : "<<sum_leftB<<endl;
cout <<"Sum of Right Diagonal Of Matrix B : "<<sum_rightB<<endl;
}

void trans(int matrixA[][2],int matrixB[][2]){		//A Function To Find Transpose Of A Function
int transposeA[2][2], transposeB[2][2];
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
	transposeA[j][i] = matrixA[i][j];
	}
}
cout<<"Transpose Of The Matrix A"<<endl<<endl;
for (int i=0; i<2;i++)
{
	for (int j=0;j<2;j++)
	{
	cout<<" "<<transposeA[i][j];
	if (j == 2 - 1)
	cout<<endl;
	}
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
	transposeB[j][i] = matrixB[i][j];
	}
}
cout<<"Transpose Of The Matrix B"<<endl<<endl;
for (int i=0; i<2;i++)
{
	for (int j=0;j<2;j++)
	{
	cout<<" "<<transposeB[i][j];
	if (j == 2 - 1)
	cout<<endl;
	}
}
}
