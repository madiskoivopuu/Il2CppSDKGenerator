#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOldBlueprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOldBlueprintEntity"));
	}


	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(IOldBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(IOldBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IOldBlueprintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IOldBlueprintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(IOldBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}

};

