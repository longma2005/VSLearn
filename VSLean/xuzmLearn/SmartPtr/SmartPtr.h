

// ����ָ��ģ��
template<class T>

class SmartPtr
{
public:
	SmartPtr(T* ptr):m_ptr(ptr), m_count(new size_t(1)){};

	SmartPtr(const SmartPtr& sPtr):m_ptr(sPtr.m_ptr), m_count(sPtr.m_count)
	{
		++*m_count;
	}

	T* operator->()const
	{
		return m_ptr;
	}

	T& operator*()
	{
		return *m_ptr;
	}

	SmartPtr& operator=(const SmartPtr& sPtr) const
	{
		++*sPtr.m_count;
		// �����������ø�������Ϊ�������ָ���������һ������Ļ�
		decUse();

		m_ptr = sPtr.m_ptr;
		m_count = sPtr.m_count;

		return *this;
	}

	~SmartPtr()
	{
		decUse();
	}


private:
	void decUse()
	{
		if (--*m_count == 0)
		{
			delete m_ptr;
			delete m_count;
		}
	}
	T* m_ptr;
	size_t* m_count;
};