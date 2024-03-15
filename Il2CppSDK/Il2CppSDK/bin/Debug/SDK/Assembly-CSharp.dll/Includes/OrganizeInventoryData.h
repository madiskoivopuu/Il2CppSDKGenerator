#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OrganizeInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OrganizeInventoryData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(OrganizeInventoryData*, uintptr_t))(Il2CppBase() + 0x11E4800))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(OrganizeInventoryData*, uintptr_t))(Il2CppBase() + 0x11E4844))(this, reader);
	}

};

