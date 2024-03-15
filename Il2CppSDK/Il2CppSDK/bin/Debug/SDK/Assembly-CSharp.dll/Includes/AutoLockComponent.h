#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoLockComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoLockComponent"));
	}

	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AutoLockComponent*, Il2CppObject*))(Il2CppBase() + 0x1A64010))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AutoLockComponent*, uintptr_t))(Il2CppBase() + 0x1A640A4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AutoLockComponent*, uintptr_t))(Il2CppBase() + 0x1A64110))(this, writer);
	}

};

