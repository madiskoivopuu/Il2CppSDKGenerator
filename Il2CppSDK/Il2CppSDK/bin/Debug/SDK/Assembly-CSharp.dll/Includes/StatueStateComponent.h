#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueStateComponent"));
	}

	template <typename R = int64_t> R& EndTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& ResetTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StatueStateComponent*, Il2CppObject*))(Il2CppBase() + 0x148FF60))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StatueStateComponent*, uintptr_t))(Il2CppBase() + 0x148FFFC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StatueStateComponent*, uintptr_t))(Il2CppBase() + 0x1490098))(this, writer);
	}

};

