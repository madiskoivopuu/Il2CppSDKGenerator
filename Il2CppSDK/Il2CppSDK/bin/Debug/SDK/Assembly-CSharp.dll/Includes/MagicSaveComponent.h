#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicSaveComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Riding() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(MagicSaveComponent*, Il2CppObject*))(Il2CppBase() + 0x1AE067C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MagicSaveComponent*, uintptr_t))(Il2CppBase() + 0x1AE0720))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MagicSaveComponent*, uintptr_t))(Il2CppBase() + 0x1AE07D4))(this, writer);
	}

};

