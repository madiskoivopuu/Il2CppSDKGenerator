#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBlueprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBlueprintEntity"));
	}


	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(IBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(IBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(IBlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(IBlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(IBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}

};

