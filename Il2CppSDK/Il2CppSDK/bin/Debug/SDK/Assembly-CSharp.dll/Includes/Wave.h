#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Wave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Wave"));
	}

	template <typename R = Il2CppArray<SpawnItem*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Wave*, uintptr_t))(Il2CppBase() + 0x22A83C0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Wave*, uintptr_t))(Il2CppBase() + 0x22A841C))(this, reader);
	}

};

