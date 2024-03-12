#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyBuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyBuildEntityData"));
	}

	template <typename T = int32_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DestroyBuildEntityData*, uintptr_t))(Il2CppBase() + 0xEBC5EC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DestroyBuildEntityData*, uintptr_t))(Il2CppBase() + 0xEBC630))(this, reader);
	}

};

}
