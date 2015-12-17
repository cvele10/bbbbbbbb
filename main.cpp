//Matrica, suma elemenata na glavnoj dijagonali i zameniti ih sve da budu nule.
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,i,j,m,s=0;
	int a[100][100];
	
	cout<<"Unesi broj vrsta:"<<endl;
	cin>>n;
	cout<<"Unesi broj kolona:"<<endl;
	cin>>m;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		cout<<"Unesi broj u matricu :";
		cin>>a[i][j];
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{ 
		if(i==j)
		s=s+a[i][j];
		}
	}
	cout<<"Suma elemenata glavne dijagonale je:";
	cout<<s<<endl;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i==j){
				a[i][j]=0;
			}
		cout<<a[i][j];
		cout<<"   ";
		}
		cout<<endl;
	}
	
	return 0;
}

