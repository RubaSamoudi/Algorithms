#include <iostream>
#include<chrono>
using namespace std;
using namespace chrono;
long long ITERATIVEFACT(int n){
	long long fact =1;
	for(int i =1;i<=n;++i)
	{
		fact *=i;
	}
	return fact;
}
long long RECURSIVEFACT(int n){
	if (n==1 || n==0)
	return 1;
	else 
	return n*RECURSIVEFACT(n-1);
	
}
int main(){
	int value ;
	cout<<"enter the value:";
	cin>> value;
	 auto start_iterative = high_resolution_clock::now();
    unsigned long long iterative_result = ITERATIVEFACT(value);
    auto stop_iterative = high_resolution_clock::now();
    auto duration_iterative = duration_cast<duration<double>>(stop_iterative - start_iterative).count();

    auto start_recursive = high_resolution_clock::now();
    unsigned long long recursive_result = RECURSIVEFACT(value);
    auto stop_recursive = high_resolution_clock::now();
    auto duration_recursive = duration_cast<duration<double>>(stop_recursive - start_recursive).count();

    cout << "Factorial of " << value << " (Iterative): " << iterative_result << ", Time: " << duration_iterative << " seconds" << endl;
    cout << "Factorial of " << value << " (Recursive): " << recursive_result << ", Time: " << duration_recursive << " seconds" << endl;

    return 0;
}