#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackPointComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackPointComponent"));
	}

	template <typename R = int64_t> R& BackTick() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BackPointComponent*, Il2CppObject*))(Il2CppBase() + 0xFBA910))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BackPointComponent*, uintptr_t))(Il2CppBase() + 0xFBA9B4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BackPointComponent*, uintptr_t))(Il2CppBase() + 0xFBAA7C))(this, writer);
	}

};

