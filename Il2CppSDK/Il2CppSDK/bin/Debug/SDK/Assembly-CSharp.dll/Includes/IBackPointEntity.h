#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackPointEntity"));
	}


	template <typename R = BackPointComponent*> R get_backPoint() {
		return ((R (*)(IBackPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBackPoint() {
		return ((R (*)(IBackPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((R (*)(IBackPointEntity*, int64_t, float, float))(Il2CppBase() + 0x0))(this, newBackTick, newX, newY);
	}
	template <typename R = void> R ReplaceBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((R (*)(IBackPointEntity*, int64_t, float, float))(Il2CppBase() + 0x0))(this, newBackTick, newX, newY);
	}
	template <typename R = void> R RemoveBackPoint() {
		return ((R (*)(IBackPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

