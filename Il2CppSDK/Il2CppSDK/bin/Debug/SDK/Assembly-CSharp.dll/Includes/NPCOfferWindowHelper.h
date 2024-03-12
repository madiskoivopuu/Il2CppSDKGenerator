#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCOfferWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPCOfferWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowNPCOffer(uintptr_t manager, uintptr_t dialogue, uintptr_t category) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x155A004))(0, manager, dialogue, category);
	}
	template <typename T = void> static T UpdateNPCOffer(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x155A150))(0, manager);
	}
	template <typename T = void> static T CloseNPCOffer(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x155A23C))(0, manager);
	}

};

}
