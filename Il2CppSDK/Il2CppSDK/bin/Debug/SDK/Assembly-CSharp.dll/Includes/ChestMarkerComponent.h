#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestMarkerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestMarkerComponent"));
	}

	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChestMarkerComponent*, Il2CppObject*))(Il2CppBase() + 0x173F91C))(this, target);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ChestMarkerComponent*, Il2CppObject*))(Il2CppBase() + 0x173F9BC))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChestMarkerComponent*, uintptr_t))(Il2CppBase() + 0x173FA74))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChestMarkerComponent*, uintptr_t))(Il2CppBase() + 0x173FB10))(this, writer);
	}

};

