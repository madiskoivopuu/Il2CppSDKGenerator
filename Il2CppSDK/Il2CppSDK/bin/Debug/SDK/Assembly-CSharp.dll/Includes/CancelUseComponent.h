#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CancelUseComponent"));
	}

	template <typename T = Il2CppString*> T& MagicName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CancelUseComponent*, uintptr_t))(Il2CppBase() + 0x15B6250))(this, targetObject);
	}

};

}
