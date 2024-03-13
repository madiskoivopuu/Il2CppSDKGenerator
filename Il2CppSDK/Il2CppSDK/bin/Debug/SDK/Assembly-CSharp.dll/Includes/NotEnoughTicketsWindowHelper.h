#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotEnoughTicketsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughTicketsWindowHelper"));
	}


	template <typename T = NotEnoughTicketsWindow*> static T ShowNotEnoughTickets(UIWindowsManager* manager, int32_t notEnoughTickets) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13B6574))(0, manager, notEnoughTickets);
	}

};

