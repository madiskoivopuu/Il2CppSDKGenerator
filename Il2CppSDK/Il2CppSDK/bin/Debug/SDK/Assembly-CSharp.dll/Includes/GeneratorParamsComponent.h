#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratorParamsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratorParamsComponent"));
	}

	template <typename R = GeneratorParams*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GeneratorParamsComponent*, Il2CppObject*))(Il2CppBase() + 0x176F8DC))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GeneratorParamsComponent*, uintptr_t))(Il2CppBase() + 0x176F974))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GeneratorParamsComponent*, uintptr_t))(Il2CppBase() + 0x176F9F4))(this, writer);
	}

};

