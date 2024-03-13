#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Wave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Wave"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Wave*, uintptr_t))(Il2CppBase() + 0x22A83C0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Wave*, uintptr_t))(Il2CppBase() + 0x22A841C))(this, reader);
	}

};

