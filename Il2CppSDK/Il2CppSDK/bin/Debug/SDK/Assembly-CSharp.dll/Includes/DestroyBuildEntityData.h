#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyBuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyBuildEntityData"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DestroyBuildEntityData*, uintptr_t))(Il2CppBase() + 0xEBC5EC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DestroyBuildEntityData*, uintptr_t))(Il2CppBase() + 0xEBC630))(this, reader);
	}

};

