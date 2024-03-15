#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILastActionTickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILastActionTickEntity"));
	}


	template <typename R = LastActionTickComponent*> R get_lastActionTick() {
		return ((R (*)(ILastActionTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLastActionTick() {
		return ((R (*)(ILastActionTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLastActionTick(int64_t newValue) {
		return ((R (*)(ILastActionTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceLastActionTick(int64_t newValue) {
		return ((R (*)(ILastActionTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveLastActionTick() {
		return ((R (*)(ILastActionTickEntity*))(Il2CppBase() + 0x0))(this);
	}

};

