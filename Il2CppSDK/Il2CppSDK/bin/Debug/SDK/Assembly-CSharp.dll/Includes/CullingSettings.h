#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CullingSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CullingSettings"));
	}

	template <typename T = uintptr_t> T& _Culling() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CullingSettings*))(Il2CppBase() + 0x1BCDBB8))(this);
	}
	template <typename T = void> T SetCulling() {
		return ((T (*)(CullingSettings*))(Il2CppBase() + 0x1BCDBBC))(this);
	}

};

}
