#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SizeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SizeComponent"));
	}

	template <typename R = float> R& Width() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Height() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SizeComponent*, Il2CppObject*))(Il2CppBase() + 0x148091C))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SizeComponent*, uintptr_t))(Il2CppBase() + 0x14809B8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SizeComponent*, uintptr_t))(Il2CppBase() + 0x14809FC))(this, reader);
	}

};

