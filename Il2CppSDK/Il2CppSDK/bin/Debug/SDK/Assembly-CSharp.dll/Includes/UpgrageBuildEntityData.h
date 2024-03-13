#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgrageBuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgrageBuildEntityData"));
	}

	template <typename T = int32_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UpgrageBuildEntityData*, uintptr_t))(Il2CppBase() + 0x15427F4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UpgrageBuildEntityData*, uintptr_t))(Il2CppBase() + 0x1542838))(this, reader);
	}

};

