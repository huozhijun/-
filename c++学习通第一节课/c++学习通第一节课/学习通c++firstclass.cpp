#include<iostream>
using namespace std;
#include "Stack.h"

Stack::Stack()
//���Ǵ���������ĺ������壬�����������Ǻ������壬ǰһ��stack�����࣬��һ��stack������
{
	count = 0;//cout��ʾ��Ч�ĸ���
}
//why count = 0?
//ջ�� = count - 1;����ջ����-1�������ŷǷ�Ԫ�أ�Ҳ�����Ŵ�ʱջ����һ��Ԫ�ض�û�С�
//


bool Stack::empty()const
{
	if (count == 0)
		return true;
	else
		return false;
}

Error_code Stack::pop()
{
	if (empty())
		return underflow;
	else
		count--;
	return success;
}
Error_code Stack::top(Stack_entry& item)const
{
	if (count == 0)
		return underflow;
	else
		item = entry[count - 1];
	return success;
}

Error_code Stack::push(const Stack_entry& item)

{
	Error_code outcome = success;
	if (count >= maxstack)//����Ҳ������ ���ܷ���
		outcome =  overflow;//���
	else
		entry[count++] = item;
	// firstly make entry[count] = item,later count + 1
    //�ж�һ��cout�Ƿ����������û�� �Ͱ�item����ȥ
	//ջ�� = count - 1;++��պõ�count��λ����
	//���ϴ����൱��item��ֵ��count����ȥ��Ȼ���Լ�
	//entry[count] = item;
	//count ++;
	return success;
}
//���Ե���pushҪô�ɹ�Ҫôʧ��



int main()
{
	system("pause");
	return 0;
}

void Extended_stack::clear()

/*

Pre:  None.

Post: If theExtended_stack is not empty, all entries are removed.

 */

{

	void Extended_stack::clear(Extended_stack &item)
	{
		if (count == 0)
			//return true;
		else
			do{
				count--;
			}
		whie(i > 0);
			//return false;
	}

}



bool Extended_stack::full() const

/*

Pre:  None.

Post: If theExtended_stack is full, true is returned. Otherwise false is returned.

 */

{
	bool Extended_stack::full(const Extended_stack & item) const
	{
		if (count >= maxstack)
			return true;
		else
			return false;

	}
}



int Extended_stack::size()const

/*

Pre:  None.

Post:Returns the number of entries in the Extended_stack

 */

{
	int Extended_stack::size(const Extended_stack & item)const
	{

		return count;
	}

}