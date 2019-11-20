#pragma once
#include "Info.h"

namespace wrpc
{
	// TODO: make me abstract
	class CSetterGetter
	{
	public:
		CSetterGetter();
		CSetterGetter(int id, std::string name, std::shared_ptr<SInfo> ptrInfo);
		~CSetterGetter();

		void SetId(int id);
		void SetName(const std::string& name);
		void SetInfo(std::shared_ptr<SInfo> ptrInfo);

		int GetId() const;
		std::string GetName() const;
		std::shared_ptr<SInfo> GetInfo() const;

		static void Print(const CSetterGetter& setter);

	private:
		int m_id;
		std::string m_name;
		std::shared_ptr<SInfo> m_ptrInfo;
	};

}

