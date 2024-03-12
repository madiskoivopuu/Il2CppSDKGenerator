#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent" 

class ColorComponent: BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorComponent"));
	}

	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ColorComponent*, uintptr_t))(Il2CppBase() + 0xE23E44))(this, targetObject);
	}

};

}
