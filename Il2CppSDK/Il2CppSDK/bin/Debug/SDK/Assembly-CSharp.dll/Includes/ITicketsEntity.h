#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITicketsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITicketsEntity"));
	}


	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(ITicketsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(ITicketsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(ITicketsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(ITicketsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(ITicketsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

