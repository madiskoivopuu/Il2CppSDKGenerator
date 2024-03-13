#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHashPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHashPositionEntity"));
	}


	template <typename T = HashPositionComponent*> T get_hashPosition() {
		return ((T (*)(IHashPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHashPosition() {
		return ((T (*)(IHashPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHashPosition(int64_t newValue) {
		return ((T (*)(IHashPositionEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceHashPosition(int64_t newValue) {
		return ((T (*)(IHashPositionEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveHashPosition() {
		return ((T (*)(IHashPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

