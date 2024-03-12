#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratorParamsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratorParamsComponent"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GeneratorParamsComponent*, uintptr_t))(Il2CppBase() + 0x176F8DC))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GeneratorParamsComponent*, uintptr_t))(Il2CppBase() + 0x176F974))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GeneratorParamsComponent*, uintptr_t))(Il2CppBase() + 0x176F9F4))(this, writer);
	}

};

}
