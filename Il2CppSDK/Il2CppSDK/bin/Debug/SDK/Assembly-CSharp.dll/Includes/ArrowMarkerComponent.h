#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent.h" 

class ArrowMarkerComponent : public BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArrowMarkerComponent"));
	}

	template <typename R = Il2CppString*> R& AssetPath() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& Order() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& CheckLevel() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& CheckClosedTimer() {
		return *(R*)((uintptr_t)this + 0x3D);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ArrowMarkerComponent*, Il2CppObject*))(Il2CppBase() + 0x1A591EC))(this, targetObject);
	}

};

