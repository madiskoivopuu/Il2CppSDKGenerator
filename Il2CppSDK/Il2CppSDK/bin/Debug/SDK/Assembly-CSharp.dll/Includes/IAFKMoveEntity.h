#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAFKMoveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAFKMoveEntity"));
	}


	template <typename R = AFKMoveComponent*> R get_aFKMove() {
		return ((R (*)(IAFKMoveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAFKMove() {
		return ((R (*)(IAFKMoveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAFKMove(int64_t newTick) {
		return ((R (*)(IAFKMoveEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename R = void> R ReplaceAFKMove(int64_t newTick) {
		return ((R (*)(IAFKMoveEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename R = void> R RemoveAFKMove() {
		return ((R (*)(IAFKMoveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

