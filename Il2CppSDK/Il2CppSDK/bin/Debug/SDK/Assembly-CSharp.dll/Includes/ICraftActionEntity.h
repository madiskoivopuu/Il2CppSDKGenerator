#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftActionEntity"));
	}


	template <typename R = CraftActionComponent*> R get_craftAction() {
		return ((R (*)(ICraftActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCraftAction() {
		return ((R (*)(ICraftActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCraftAction(Il2CppString* newName) {
		return ((R (*)(ICraftActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceCraftAction(Il2CppString* newName) {
		return ((R (*)(ICraftActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveCraftAction() {
		return ((R (*)(ICraftActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

