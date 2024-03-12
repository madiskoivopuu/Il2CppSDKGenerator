#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PatchCommand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommand"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Params() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PatchCommand*, uintptr_t))(Il2CppBase() + 0x11E9838))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PatchCommand*, uintptr_t))(Il2CppBase() + 0x11E98D4))(this, writer);
	}

};

}
