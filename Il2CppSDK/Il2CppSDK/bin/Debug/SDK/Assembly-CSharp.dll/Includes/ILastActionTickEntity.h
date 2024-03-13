#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILastActionTickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILastActionTickEntity"));
	}


	template <typename T = LastActionTickComponent*> T get_lastActionTick() {
		return ((T (*)(ILastActionTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLastActionTick() {
		return ((T (*)(ILastActionTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLastActionTick(int64_t newValue) {
		return ((T (*)(ILastActionTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceLastActionTick(int64_t newValue) {
		return ((T (*)(ILastActionTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveLastActionTick() {
		return ((T (*)(ILastActionTickEntity*))(Il2CppBase() + 0x0))(this);
	}

};

