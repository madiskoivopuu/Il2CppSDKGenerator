#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SizeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SizeComponent"));
	}

	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(SizeComponent*, Il2CppObject*))(Il2CppBase() + 0x148091C))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SizeComponent*, uintptr_t))(Il2CppBase() + 0x14809B8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SizeComponent*, uintptr_t))(Il2CppBase() + 0x14809FC))(this, reader);
	}

};

