#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAABBEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAABBEntity"));
	}


	template <typename T = uintptr_t> T get_aABB() {
		return ((T (*)(IAABBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAABB() {
		return ((T (*)(IAABBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((T (*)(IAABBEntity*, float, float, float, float))(Il2CppBase() + 0x0))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename T = void> T ReplaceAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((T (*)(IAABBEntity*, float, float, float, float))(Il2CppBase() + 0x0))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename T = void> T RemoveAABB() {
		return ((T (*)(IAABBEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
