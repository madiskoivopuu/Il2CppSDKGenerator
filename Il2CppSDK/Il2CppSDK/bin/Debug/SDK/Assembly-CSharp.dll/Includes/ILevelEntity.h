#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILevelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILevelEntity"));
	}


	template <typename R = LevelComponent*> R get_level() {
		return ((R (*)(ILevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLevel() {
		return ((R (*)(ILevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLevel(float newValue) {
		return ((R (*)(ILevelEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceLevel(float newValue) {
		return ((R (*)(ILevelEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveLevel() {
		return ((R (*)(ILevelEntity*))(Il2CppBase() + 0x0))(this);
	}

};

