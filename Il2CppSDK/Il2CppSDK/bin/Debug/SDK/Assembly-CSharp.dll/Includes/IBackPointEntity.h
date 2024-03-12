#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackPointEntity"));
	}


	template <typename T = uintptr_t> T get_backPoint() {
		return ((T (*)(IBackPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBackPoint() {
		return ((T (*)(IBackPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((T (*)(IBackPointEntity*, int64_t, float, float))(Il2CppBase() + 0x0))(this, newBackTick, newX, newY);
	}
	template <typename T = void> T ReplaceBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((T (*)(IBackPointEntity*, int64_t, float, float))(Il2CppBase() + 0x0))(this, newBackTick, newX, newY);
	}
	template <typename T = void> T RemoveBackPoint() {
		return ((T (*)(IBackPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
