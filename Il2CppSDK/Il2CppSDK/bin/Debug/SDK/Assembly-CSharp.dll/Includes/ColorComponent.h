#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent.h" 

class ColorComponent : public BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorComponent"));
	}

	template <typename R = int32_t> R& Priority() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ColorComponent*, Il2CppObject*))(Il2CppBase() + 0xE23E44))(this, targetObject);
	}

};

