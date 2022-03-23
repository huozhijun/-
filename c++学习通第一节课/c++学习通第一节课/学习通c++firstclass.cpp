#include<iostream>
using namespace std;
#include "Stack.h"

Stack::Stack()
//这是带参数构造的函数定义，大括号里面是函数定义，前一个stack代表类，后一个stack代表函数
{
	count = 0;//cout表示有效的个数
}
//why count = 0?
//栈顶 = count - 1;所以栈顶是-1，代表着非法元素，也代表着此时栈里面一个元素都没有。
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
	if (count >= maxstack)//等于也是满了 不能放了
		outcome =  overflow;//溢出
	else
		entry[count++] = item;
	// firstly make entry[count] = item,later count + 1
    //判断一下cout是否塞满，如果没有 就把item塞进去
	//栈顶 = count - 1;++则刚好到count的位置了
	//以上代码相当于item赋值到count里面去，然后自加
	//entry[count] = item;
	//count ++;
	return success;
}
//所以调用push要么成功要么失败



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