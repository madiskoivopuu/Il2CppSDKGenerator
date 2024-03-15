#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent.h" 

class MinimapArrowComponent : public BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapArrowComponent"));
	}

	template <typename R = MinimapArrowMode> R& ArrowMode() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& NotRotation() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = bool> R& OnBorder() {
		return *(R*)((uintptr_t)this + 0x35);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MinimapArrowComponent*, Il2CppObject*))(Il2CppBase() + 0x12D2958))(this, targetObject);
	}

};

