#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicByStackItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicByStackItem"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MinStackCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MagicByStackItem*, uintptr_t))(Il2CppBase() + 0x10CBDD8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MagicByStackItem*, uintptr_t))(Il2CppBase() + 0x10CBE74))(this, writer);
	}

};

