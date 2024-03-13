#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoLockComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoLockComponent"));
	}

	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AutoLockComponent*, Il2CppObject*))(Il2CppBase() + 0x1A64010))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AutoLockComponent*, uintptr_t))(Il2CppBase() + 0x1A640A4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AutoLockComponent*, uintptr_t))(Il2CppBase() + 0x1A64110))(this, writer);
	}

};

