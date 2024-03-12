#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueStateComponent"));
	}

	template <typename T = int64_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& ResetTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(StatueStateComponent*, uintptr_t))(Il2CppBase() + 0x148FF60))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StatueStateComponent*, uintptr_t))(Il2CppBase() + 0x148FFFC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StatueStateComponent*, uintptr_t))(Il2CppBase() + 0x1490098))(this, writer);
	}

};

}
