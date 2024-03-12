#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRuneDeactivatedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneDeactivatedData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Keys() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClassRuneDeactivatedData*, uintptr_t))(Il2CppBase() + 0x159CFF4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClassRuneDeactivatedData*, uintptr_t))(Il2CppBase() + 0x159D060))(this, reader);
	}

};

}
