#include <vector>
#include <iostream>
#include <ctime>
#include <queue>
#include <list>

using namespace std;



template<class T>
void display(vector<T> &v, ostream &out){


	for(typename vector<T>::iterator it = v.begin(); it != v.end(); it++){
	
	out<< *it << " ";
	
	}
	
	out<<endl;


}


int main(){

	queue<int,vector<int> > intQueue1; //need sace, queue based on a vector
	intQueue1.push(1);
	cout<<"Front of vector Queue: "<<intQueue1.front()<<endl;

	queue<int, list<int> > intQueue2; //queue based on a list
	intQueue2.push(1);
	cout<<"Front of list Queue: "<<intQueue1.front()<<endl;
	
	vector<queue<int> > vecOfQueues;
	
	int num = 0;//get num from user

	cout<<"enter how many numbers: "<<endl;
	cin>>num;

	typedef float VectorDataType; //seamless and readability improvement
	vector<VectorDataType> v(num); //there is a construcotr that allows us to put size, so we can use it as an array
	//wanted to put num to avoid constantly reallocate memory
	//lets try manually reserving memory
	
	v.reserve(num);

	clock_t clockBegin = clock();
	



	for(int i = 0; i<num; i++){
		//cin>>v[i];
		//v.push_back(i); //going to re-allocate memory, then double capacity(going to copy elements). VERY FAST
		//v[i];
		v.insert(v.begin(), i);
	}

	clock_t clockEnd = clock();
	
	double timeInSec = (double)(clockEnd - clockBegin) / CLOCKS_PER_SEC;
	cout<<"It took "<<timeInSec<<" sec to run the loop"<<endl; 


	//cout<<"The numbers you entered: "<<endl;

	/* //Going to make iterator for loop
	for(int i = 0; i<num; i++){
		cout<<v[i]<<"  ";
	}
	*/


	/*
	//moved into display
	vector<VectorDataType>::iterator it = VectorVin.begin(); //for loop requires 3 parameters, so we can put this inside if we want
	for( ; it != VectorVin.end(); it++){
	
	cout<< *it << " ";
	
	}
	
	cout<<endl;
	*/

	//display(v,cout);


	return 0;
}
