#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestMarkerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestMarkerData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChestMarkerData*, uintptr_t))(Il2CppBase() + 0x173FB5C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChestMarkerData*, uintptr_t))(Il2CppBase() + 0x173FBC0))(this, reader);
	}

};

