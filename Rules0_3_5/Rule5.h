#pragma once
#include <string>
#include <print>


class Rule5
{
public:
	Rule5(const std::string& str, int i) 
		: m_str{ str }, m_int{ i }
	{}
	~Rule5() = default;
	Rule5(const Rule5& other)
		: m_str{ other.m_str },m_int{ other.m_int}
	{

	}

	Rule5& operator=(const Rule5& other)
	{
		if (this != &other)
		{
			m_str = other.m_str;
			m_int = other.m_int;

		}
		return *this;
	}
	Rule5(Rule5&& other)
		: m_str{ std::move(other.m_str) }, m_int{ other.m_int }
	{
		other.m_int = 0;
	}
	Rule5& operator=( Rule5&& other)
	{
		if (this != &other)
		{
			m_str = std::move(other.m_str);
			m_int = other.m_int;
			other.m_int = 0;
		}
		return *this;
	}

public:
	std::string getString() const { return m_str; };
	int getInt() const { return m_int; };
private:
	std::string m_str;
	int m_int;

};

void printRule5(const Rule5& r5)
{
	std::println("Rule 5 values:\n");
	if (r5.getString().empty())
	{
		std::println("String: Empty!(0)");
	}
	else
	{
		std::println("String: {}", r5.getString());
	}
	std::println("Int: {}", r5.getInt());
}