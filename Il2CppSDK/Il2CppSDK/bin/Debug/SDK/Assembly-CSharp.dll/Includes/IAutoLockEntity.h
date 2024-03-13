#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoLockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoLockEntity"));
	}


	template <typename T = AutoLockComponent*> T get_autoLock() {
		return ((T (*)(IAutoLockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAutoLock() {
		return ((T (*)(IAutoLockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAutoLock(int64_t newTime) {
		return ((T (*)(IAutoLockEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTime);
	}
	template <typename T = void> T ReplaceAutoLock(int64_t newTime) {
		return ((T (*)(IAutoLockEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTime);
	}
	template <typename T = void> T RemoveAutoLock() {
		return ((T (*)(IAutoLockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

