#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotEnoughTicketsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughTicketsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowNotEnoughTickets(uintptr_t manager, int32_t notEnoughTickets) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x13B6574))(0, manager, notEnoughTickets);
	}

};

}
