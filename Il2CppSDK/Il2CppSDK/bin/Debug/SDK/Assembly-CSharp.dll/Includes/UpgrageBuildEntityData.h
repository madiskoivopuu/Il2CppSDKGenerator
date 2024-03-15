#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgrageBuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgrageBuildEntityData"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UpgrageBuildEntityData*, uintptr_t))(Il2CppBase() + 0x15427F4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UpgrageBuildEntityData*, uintptr_t))(Il2CppBase() + 0x1542838))(this, reader);
	}

};

