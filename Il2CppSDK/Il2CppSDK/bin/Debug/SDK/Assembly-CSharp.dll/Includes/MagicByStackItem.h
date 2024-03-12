#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicByStackItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicByStackItem"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MinStackCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MagicByStackItem*, uintptr_t))(Il2CppBase() + 0x10CBDD8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MagicByStackItem*, uintptr_t))(Il2CppBase() + 0x10CBE74))(this, writer);
	}

};

}
