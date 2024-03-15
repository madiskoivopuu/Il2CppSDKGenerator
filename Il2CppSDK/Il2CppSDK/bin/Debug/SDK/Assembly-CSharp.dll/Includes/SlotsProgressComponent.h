#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotsProgressComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotsProgressComponent"));
	}

	template <typename R = Il2CppArray<Resource>*> R& Data() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SlotsProgressComponent*, uintptr_t))(Il2CppBase() + 0x148415C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SlotsProgressComponent*, uintptr_t))(Il2CppBase() + 0x1484314))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SlotsProgressComponent*, Il2CppObject*))(Il2CppBase() + 0x14843BC))(this, targetObject);
	}

};

