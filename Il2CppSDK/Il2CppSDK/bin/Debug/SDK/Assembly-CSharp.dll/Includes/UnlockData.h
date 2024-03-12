#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsUnlocked() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int64_t> T& AutoLockTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UnlockData*, uintptr_t))(Il2CppBase() + 0x153AA54))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UnlockData*, uintptr_t))(Il2CppBase() + 0x153AAB8))(this, reader);
	}

};

}
