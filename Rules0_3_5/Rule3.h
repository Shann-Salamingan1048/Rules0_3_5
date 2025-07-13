#pragma once
#include <print>

// Destructor , Copy Constructor, Copy Assignment
class Rule3
{
public:
	Rule3()
	{
		m_data = new int(0);
	}
	Rule3(int data) : m_data(new int(data)) {}

	~Rule3() // Destructor
	{
		delete m_data;
	}
	/*Rule3(const Rule3& other) : m_data(new int(*other.getData())) {}*/
	Rule3(const Rule3& other)
	{
		m_data = new int(*other.getData());
	}

	Rule3& operator=(const Rule3& other)
	{
		if (this != &other)
		{
			delete m_data;
			m_data = new int(*other.getData());
		}
		return *this;
	}
public:
	void setData(int data)
	{
		*m_data = data;
	}
	int* getData() const
	{
		return m_data;
	}

private:
	int* m_data;
};