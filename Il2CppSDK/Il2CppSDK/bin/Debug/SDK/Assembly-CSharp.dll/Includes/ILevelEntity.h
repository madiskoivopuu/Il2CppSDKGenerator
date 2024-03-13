#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILevelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILevelEntity"));
	}


	template <typename T = LevelComponent*> T get_level() {
		return ((T (*)(ILevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLevel() {
		return ((T (*)(ILevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLevel(float newValue) {
		return ((T (*)(ILevelEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceLevel(float newValue) {
		return ((T (*)(ILevelEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveLevel() {
		return ((T (*)(ILevelEntity*))(Il2CppBase() + 0x0))(this);
	}

};

