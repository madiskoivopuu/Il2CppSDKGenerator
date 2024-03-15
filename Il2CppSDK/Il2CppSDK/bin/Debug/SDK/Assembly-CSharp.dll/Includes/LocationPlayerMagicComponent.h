#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationPlayerMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationPlayerMagicComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& AsChildren() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LocationPlayerMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x17BAACC))(this, target);
	}

};

