#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WayPointComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WayPointComponent"));
	}

	template <typename R = Il2CppString*> R& NextPoint() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(WayPointComponent*, Il2CppObject*))(Il2CppBase() + 0x112EF98))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(WayPointComponent*, Il2CppObject*))(Il2CppBase() + 0x112F03C))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WayPointComponent*, uintptr_t))(Il2CppBase() + 0x112F0F4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WayPointComponent*, uintptr_t))(Il2CppBase() + 0x112F190))(this, writer);
	}

};

