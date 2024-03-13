#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOldBlueprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOldBlueprintEntity"));
	}


	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(IOldBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(IOldBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IOldBlueprintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IOldBlueprintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(IOldBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}

};

