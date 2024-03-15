#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IgnoreControlsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IgnoreControlsComponent"));
	}

	template <typename R = Il2CppString*> R& ActiveCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Stunned() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Rooted() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = bool> R& Silence() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = bool> R& Impotent() {
		return *(R*)((uintptr_t)this + 0x1B);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(IgnoreControlsComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DA14))(this, targetObject);
	}

};

