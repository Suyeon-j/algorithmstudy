// 백준 # 2447
#include<iostream>
#include<cmath>
using namespace std;

int num;

void star(int x, int y, int z)
{
	if ((x / z) % 3 == 1 && (y / z) % 3 == 1) cout << " ";
	else
	{
		if (z == 1) cout << "*";
		else star(x, y, z / 3);
	}
}

int main()
{
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			star(i, j, num / 3);
		cout << '\n';
	}
}
