#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent" 

class MinimapArrowComponent: BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapArrowComponent"));
	}

	template <typename T = uintptr_t> T& ArrowMode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& NotRotation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& OnBorder() {
		return *(T*)((uintptr_t)this + 0x35);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MinimapArrowComponent*, uintptr_t))(Il2CppBase() + 0x12D2958))(this, targetObject);
	}

};

}
