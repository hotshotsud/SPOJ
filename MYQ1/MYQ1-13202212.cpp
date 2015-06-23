#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int seat_number,row_number,reference;
		long long int difference;
		char direction,seat_position;
		scanf("%lld",&seat_number);
		if(seat_number==1)
		{
			cout<<"poor conductor"<<endl;
			goto suk;
		}
		else if(seat_number%5==0)
		{
			row_number=seat_number/5;
		}
		else if((seat_number-1)%5==0)
		{
			row_number=(seat_number-1)/5;
		}
		else
		{
			row_number=(seat_number-1)/5;
			row_number++;
		}
				
		reference=row_number*5;
		printf("%lld ",row_number);
		if(row_number%2!=0)
		{
			difference=reference-seat_number;
			if(difference==0)
			{
				direction='R';
				seat_position='M';
			}
			else if(difference==1)
			{
				direction='R';								
				seat_position='A';				
			}
			else if(difference==-1)
			{
				direction='R';
				seat_position='W';
			}
			else if(difference==2)
			{
				direction='L';
				seat_position='A';
			}
			else 
			{
				direction='L';
				seat_position='W';
			}
		}
		else
		{
			difference=reference-seat_number;
			if(difference==0)
			{
				direction='L';
				seat_position='A';
			}
			else if(difference==1)
			{				
				direction='R';
				seat_position='A';				
			}
			else if(difference==-1)
			{
				direction='L';
				seat_position='W';
			}
			else if(difference==2)
			{
				direction='R';
				seat_position='M';
			}
			else 
			{
				direction='R';
				seat_position='W';
			}
		}
		printf("%c %c\n",seat_position,direction);
		suk:{}
	}
	return 0;
}