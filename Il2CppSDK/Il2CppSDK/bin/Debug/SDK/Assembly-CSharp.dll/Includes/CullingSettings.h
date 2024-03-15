#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CullingSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CullingSettings"));
	}

	template <typename R = uintptr_t> R& _Culling() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(CullingSettings*))(Il2CppBase() + 0x1BCDBB8))(this);
	}
	template <typename R = void> R SetCulling() {
		return ((R (*)(CullingSettings*))(Il2CppBase() + 0x1BCDBBC))(this);
	}

};

