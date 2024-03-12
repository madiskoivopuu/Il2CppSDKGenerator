#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITicketsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITicketsEntity"));
	}


	template <typename T = uintptr_t> T get_tickets() {
		return ((T (*)(ITicketsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(ITicketsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(ITicketsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(ITicketsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(ITicketsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
