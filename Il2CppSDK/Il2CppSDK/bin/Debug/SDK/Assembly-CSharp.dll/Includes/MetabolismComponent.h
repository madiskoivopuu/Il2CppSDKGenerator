#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismComponent"));
	}

	template <typename R = float> R& Hunger() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Thirst() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MetabolismComponent*, Il2CppObject*))(Il2CppBase() + 0x12D095C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MetabolismComponent*, uintptr_t))(Il2CppBase() + 0x12D09F8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MetabolismComponent*, uintptr_t))(Il2CppBase() + 0x12D0A94))(this, writer);
	}

};

