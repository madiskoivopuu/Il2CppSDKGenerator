#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& IsUnlocked() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int64_t> R& AutoLockTime() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UnlockData*, uintptr_t))(Il2CppBase() + 0x153AA54))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UnlockData*, uintptr_t))(Il2CppBase() + 0x153AAB8))(this, reader);
	}

};

