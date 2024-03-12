#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttachComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttachComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AttachComponent*, uintptr_t))(Il2CppBase() + 0x1A5A4A4))(this, targetObject);
	}

};

}
