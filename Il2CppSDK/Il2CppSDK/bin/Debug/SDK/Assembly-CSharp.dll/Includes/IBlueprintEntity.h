#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBlueprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBlueprintEntity"));
	}


	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(IBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(IBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(IBlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(IBlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(IBlueprintEntity*))(Il2CppBase() + 0x0))(this);
	}

};

