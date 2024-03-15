#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotEnoughTicketsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughTicketsWindowHelper"));
	}


	template <typename R = NotEnoughTicketsWindow*> static R ShowNotEnoughTickets(UIWindowsManager* manager, int32_t notEnoughTickets) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13B6574))(0, manager, notEnoughTickets);
	}

};

