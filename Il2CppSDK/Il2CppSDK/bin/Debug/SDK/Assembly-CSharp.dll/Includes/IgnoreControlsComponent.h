#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IgnoreControlsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IgnoreControlsComponent"));
	}

	template <typename T = Il2CppString*> T& ActiveCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Stunned() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Rooted() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& Silence() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& Impotent() {
		return *(T*)((uintptr_t)this + 0x1B);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(IgnoreControlsComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DA14))(this, targetObject);
	}

};

