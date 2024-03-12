#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAFKMoveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAFKMoveEntity"));
	}


	template <typename T = uintptr_t> T get_aFKMove() {
		return ((T (*)(IAFKMoveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAFKMove() {
		return ((T (*)(IAFKMoveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAFKMove(int64_t newTick) {
		return ((T (*)(IAFKMoveEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename T = void> T ReplaceAFKMove(int64_t newTick) {
		return ((T (*)(IAFKMoveEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename T = void> T RemoveAFKMove() {
		return ((T (*)(IAFKMoveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
