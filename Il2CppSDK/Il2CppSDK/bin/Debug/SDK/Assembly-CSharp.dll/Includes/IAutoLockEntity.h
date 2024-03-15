#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoLockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoLockEntity"));
	}


	template <typename R = AutoLockComponent*> R get_autoLock() {
		return ((R (*)(IAutoLockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAutoLock() {
		return ((R (*)(IAutoLockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAutoLock(int64_t newTime) {
		return ((R (*)(IAutoLockEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTime);
	}
	template <typename R = void> R ReplaceAutoLock(int64_t newTime) {
		return ((R (*)(IAutoLockEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTime);
	}
	template <typename R = void> R RemoveAutoLock() {
		return ((R (*)(IAutoLockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

