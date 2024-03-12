#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPortalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPortalComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ExitTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ToLocationName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& WithoutParent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ToGlobalMap() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& SkipGlobalMap() {
		return *(T*)((uintptr_t)this + 0x2A);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyPortalComponent*, uintptr_t))(Il2CppBase() + 0x189514C))(this, target);
	}

};

}
