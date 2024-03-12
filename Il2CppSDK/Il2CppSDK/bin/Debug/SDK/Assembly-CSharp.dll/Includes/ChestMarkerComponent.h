#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestMarkerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestMarkerComponent"));
	}

	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ChestMarkerComponent*, uintptr_t))(Il2CppBase() + 0x173F91C))(this, target);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(ChestMarkerComponent*, uintptr_t))(Il2CppBase() + 0x173F9BC))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChestMarkerComponent*, uintptr_t))(Il2CppBase() + 0x173FA74))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChestMarkerComponent*, uintptr_t))(Il2CppBase() + 0x173FB10))(this, writer);
	}

};

}
