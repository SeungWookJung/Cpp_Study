#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num[10];			//�����Ҵ�
	int* pnum = new int[10]; //�����Ҵ�   ���α׷� ���� �߿��� ���� �Ҵ� ����


	/* //���ʹ� �̷��� ���  //�̷��͵��� STL(standard template library) =>vector,list,stack,queue
	vector<int> v;
	vector<float> vf;
	vector<double> vd;
	*/

	vector <float> v;
	v.push_back(3.14f);
	v.push_back(3.25f);
	cout << v.at(0) << endl;  //v[0]
	cout << v.at(1) << endl;  // v[1]

	cout << v[0] << endl;
	cout << v[1] << endl;

	cout << "v.capacity : " << v.capacity() << endl;
	cout << "v.size : " << v.size() << endl;

	return 0;
}
