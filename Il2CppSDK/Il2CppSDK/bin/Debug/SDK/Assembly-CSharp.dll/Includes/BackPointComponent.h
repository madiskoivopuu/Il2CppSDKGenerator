#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackPointComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackPointComponent"));
	}

	template <typename T = int64_t> T& BackTick() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BackPointComponent*, Il2CppObject*))(Il2CppBase() + 0xFBA910))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BackPointComponent*, uintptr_t))(Il2CppBase() + 0xFBA9B4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BackPointComponent*, uintptr_t))(Il2CppBase() + 0xFBAA7C))(this, writer);
	}

};

