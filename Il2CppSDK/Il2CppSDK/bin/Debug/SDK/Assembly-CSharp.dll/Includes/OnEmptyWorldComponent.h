#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnEmptyWorldComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnEmptyWorldComponent"));
	}

	 Nullable1bool>*& Active() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Restore() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = bool> R& Destroy() {
		return *(R*)((uintptr_t)this + 0x13);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OnEmptyWorldComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC818))(this, target);
	}

};

