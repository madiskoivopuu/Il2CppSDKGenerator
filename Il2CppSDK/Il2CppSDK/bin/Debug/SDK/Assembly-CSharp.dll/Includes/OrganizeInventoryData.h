#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OrganizeInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OrganizeInventoryData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(OrganizeInventoryData*, uintptr_t))(Il2CppBase() + 0x11E4800))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(OrganizeInventoryData*, uintptr_t))(Il2CppBase() + 0x11E4844))(this, reader);
	}

};

}
