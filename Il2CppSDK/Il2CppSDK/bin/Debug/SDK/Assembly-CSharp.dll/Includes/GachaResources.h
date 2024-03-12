#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GachaResources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GachaResources"));
	}

	template <typename T = uintptr_t> T& Base() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Additional() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ListAdditional() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GachaResources*, uintptr_t))(Il2CppBase() + 0x10C433C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GachaResources*, uintptr_t))(Il2CppBase() + 0x10C44A8))(this, reader);
	}

};

}
