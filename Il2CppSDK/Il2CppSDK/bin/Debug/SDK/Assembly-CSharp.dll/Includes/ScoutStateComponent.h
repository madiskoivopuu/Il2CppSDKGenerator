#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutStateComponent"));
	}

	template <typename R = int64_t> R& EndTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& ResetTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ScoutStateComponent*, Il2CppObject*))(Il2CppBase() + 0x1357EAC))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ScoutStateComponent*, uintptr_t))(Il2CppBase() + 0x1357F54))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ScoutStateComponent*, uintptr_t))(Il2CppBase() + 0x135801C))(this, writer);
	}

};

