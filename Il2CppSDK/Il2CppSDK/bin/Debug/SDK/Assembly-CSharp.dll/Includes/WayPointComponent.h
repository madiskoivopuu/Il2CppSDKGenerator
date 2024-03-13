#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WayPointComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WayPointComponent"));
	}

	template <typename T = Il2CppString*> T& NextPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(WayPointComponent*, Il2CppObject*))(Il2CppBase() + 0x112EF98))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(WayPointComponent*, Il2CppObject*))(Il2CppBase() + 0x112F03C))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WayPointComponent*, uintptr_t))(Il2CppBase() + 0x112F0F4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WayPointComponent*, uintptr_t))(Il2CppBase() + 0x112F190))(this, writer);
	}

};

