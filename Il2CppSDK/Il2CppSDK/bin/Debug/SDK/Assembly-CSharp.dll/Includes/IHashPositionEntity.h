#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHashPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHashPositionEntity"));
	}


	template <typename R = HashPositionComponent*> R get_hashPosition() {
		return ((R (*)(IHashPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHashPosition() {
		return ((R (*)(IHashPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHashPosition(int64_t newValue) {
		return ((R (*)(IHashPositionEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceHashPosition(int64_t newValue) {
		return ((R (*)(IHashPositionEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveHashPosition() {
		return ((R (*)(IHashPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

