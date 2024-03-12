#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIEvadeTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIEvadeTimeComponent"));
	}

	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AIEvadeTimeComponent*, uintptr_t))(Il2CppBase() + 0x1D96304))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AIEvadeTimeComponent*, uintptr_t))(Il2CppBase() + 0x1D96398))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AIEvadeTimeComponent*, uintptr_t))(Il2CppBase() + 0x1D96404))(this, writer);
	}

};

}
