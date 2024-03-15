#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCOfferWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPCOfferWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowNPCOffer(UIWindowsManager* manager, DialogueEntity* dialogue, StoreCategory category) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*, StoreCategory))(Il2CppBase() + 0x155A004))(0, manager, dialogue, category);
	}
	template <typename R = void> static R UpdateNPCOffer(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x155A150))(0, manager);
	}
	template <typename R = void> static R CloseNPCOffer(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x155A23C))(0, manager);
	}

};

