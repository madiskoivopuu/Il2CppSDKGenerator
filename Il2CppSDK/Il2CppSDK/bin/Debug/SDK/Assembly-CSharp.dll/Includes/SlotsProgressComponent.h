#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotsProgressComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotsProgressComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SlotsProgressComponent*, uintptr_t))(Il2CppBase() + 0x148415C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SlotsProgressComponent*, uintptr_t))(Il2CppBase() + 0x1484314))(this, writer);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SlotsProgressComponent*, Il2CppObject*))(Il2CppBase() + 0x14843BC))(this, targetObject);
	}

};

