#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftActionEntity"));
	}


	template <typename T = CraftActionComponent*> T get_craftAction() {
		return ((T (*)(ICraftActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCraftAction() {
		return ((T (*)(ICraftActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCraftAction(Il2CppString* newName) {
		return ((T (*)(ICraftActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceCraftAction(Il2CppString* newName) {
		return ((T (*)(ICraftActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveCraftAction() {
		return ((T (*)(ICraftActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

