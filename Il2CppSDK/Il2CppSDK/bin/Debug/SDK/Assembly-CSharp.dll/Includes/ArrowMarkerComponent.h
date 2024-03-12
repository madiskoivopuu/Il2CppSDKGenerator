#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent" 

class ArrowMarkerComponent: BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArrowMarkerComponent"));
	}

	template <typename T = Il2CppString*> T& AssetPath() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& CheckLevel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& CheckClosedTimer() {
		return *(T*)((uintptr_t)this + 0x3D);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ArrowMarkerComponent*, uintptr_t))(Il2CppBase() + 0x1A591EC))(this, targetObject);
	}

};

}
