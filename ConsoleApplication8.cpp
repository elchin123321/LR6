#include "stdafx.h"
#include "iostream"

using namespace std;
const int N = 10;
void mass_i(int A[N]);
void mass_cout(int A[N]);
void reverse(int A[N],int C[N]);
int main()
{
	int A[N];
	int C[N];
	mass_i(A);
	reverse(A,C);
	cout << "Mass 4" << endl;
	mass_cout(C);
	system("pause");
	return 0;
}
void mass_i(int A[N])
{

	for (int i = 0; i < N; i++)
		cin >> A[i];
}
void mass_cout(int A[N])
{
	for (int i = 0; i < N; i++)
		cout << A[i] << endl;
}
void reverse(int A[N],int C[N]) {
	int b;
	for (int i = 0; i<N; i++) {
		C[i] = A[N - i - 1];
	}
}
