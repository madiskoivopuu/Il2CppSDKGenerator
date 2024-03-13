#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCOfferWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPCOfferWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowNPCOffer(UIWindowsManager* manager, DialogueEntity* dialogue, StoreCategory* category) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*, StoreCategory*))(Il2CppBase() + 0x155A004))(0, manager, dialogue, category);
	}
	template <typename T = void> static T UpdateNPCOffer(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x155A150))(0, manager);
	}
	template <typename T = void> static T CloseNPCOffer(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x155A23C))(0, manager);
	}

};

