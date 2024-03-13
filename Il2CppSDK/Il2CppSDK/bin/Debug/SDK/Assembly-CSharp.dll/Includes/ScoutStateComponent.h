#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutStateComponent"));
	}

	template <typename T = int64_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& ResetTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ScoutStateComponent*, Il2CppObject*))(Il2CppBase() + 0x1357EAC))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ScoutStateComponent*, uintptr_t))(Il2CppBase() + 0x1357F54))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ScoutStateComponent*, uintptr_t))(Il2CppBase() + 0x135801C))(this, writer);
	}

};

