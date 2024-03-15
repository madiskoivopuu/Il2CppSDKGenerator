#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIEvadeTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIEvadeTimeComponent"));
	}

	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AIEvadeTimeComponent*, Il2CppObject*))(Il2CppBase() + 0x1D96304))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AIEvadeTimeComponent*, uintptr_t))(Il2CppBase() + 0x1D96398))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AIEvadeTimeComponent*, uintptr_t))(Il2CppBase() + 0x1D96404))(this, writer);
	}

};

