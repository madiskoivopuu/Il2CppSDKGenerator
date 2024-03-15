#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicSaveComponent"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Riding() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MagicSaveComponent*, Il2CppObject*))(Il2CppBase() + 0x1AE067C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MagicSaveComponent*, uintptr_t))(Il2CppBase() + 0x1AE0720))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MagicSaveComponent*, uintptr_t))(Il2CppBase() + 0x1AE07D4))(this, writer);
	}

};

