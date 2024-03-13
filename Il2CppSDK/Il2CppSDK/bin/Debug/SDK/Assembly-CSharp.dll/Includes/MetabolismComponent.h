#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismComponent"));
	}

	template <typename T = float> T& Hunger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Thirst() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(MetabolismComponent*, Il2CppObject*))(Il2CppBase() + 0x12D095C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MetabolismComponent*, uintptr_t))(Il2CppBase() + 0x12D09F8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MetabolismComponent*, uintptr_t))(Il2CppBase() + 0x12D0A94))(this, writer);
	}

};

