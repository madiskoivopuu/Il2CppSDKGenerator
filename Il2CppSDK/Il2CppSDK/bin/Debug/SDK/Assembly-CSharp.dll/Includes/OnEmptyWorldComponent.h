#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnEmptyWorldComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnEmptyWorldComponent"));
	}

	template <typename T = Nullable1bool>*> T& Active() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Restore() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& Destroy() {
		return *(T*)((uintptr_t)this + 0x13);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OnEmptyWorldComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC818))(this, target);
	}

};

