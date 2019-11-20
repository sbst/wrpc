#include "pch.h"
#include "SetterGetter.h"

using namespace wrpc;

CSetterGetter::CSetterGetter() : m_id(0), m_name("something"), m_ptrInfo(std::make_shared<SInfo>())
{
	m_ptrInfo->value = "raw string value";
}

CSetterGetter::CSetterGetter(int id, std::string name, std::shared_ptr<SInfo> ptrInfo) :
	m_id(id), m_name(name), m_ptrInfo(ptrInfo)
{
}


CSetterGetter::~CSetterGetter()
{
	m_ptrInfo->value = NULL;
}


void CSetterGetter::SetId(int id)
{
	m_id = id;
}

void CSetterGetter::SetName(const std::string& name)
{
	m_name = name;
}

void CSetterGetter::SetInfo(std::shared_ptr<SInfo> ptrInfo)
{
	m_ptrInfo->value = NULL;
	m_ptrInfo = ptrInfo;
}

int CSetterGetter::GetId() const
{
	return m_id;
}

std::string CSetterGetter::GetName() const
{
	return m_name;
}

std::shared_ptr<SInfo> CSetterGetter::GetInfo() const
{
	return m_ptrInfo;
}

void CSetterGetter::Print(const CSetterGetter& setter)
{
	std::cout << "id: " << setter.GetId() << " name: " << setter.GetName() << std::endl;
	auto ptrInfo = setter.GetInfo();
	std::cout << "info: \"" << ptrInfo->value << "\"" << std::endl;
}
