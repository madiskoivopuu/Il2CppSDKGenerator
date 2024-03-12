#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ButtonHelper" 

class GoToButtonHelper: ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToButtonHelper"));
	}

	template <typename T = uintptr_t> T& TitleText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& NotActivematerial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Lock() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LockText() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Bind(uintptr_t dialogue, void* onClick) {
		return ((T (*)(GoToButtonHelper*, uintptr_t, void*))(Il2CppBase() + 0x12DEB74))(this, dialogue, onClick);
	}

};

}
