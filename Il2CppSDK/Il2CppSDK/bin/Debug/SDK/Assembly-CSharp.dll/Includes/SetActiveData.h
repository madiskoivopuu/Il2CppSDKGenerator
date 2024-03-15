#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetActiveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetActiveData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& IsActive() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetActiveData*, uintptr_t))(Il2CppBase() + 0x1623CE8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetActiveData*, uintptr_t))(Il2CppBase() + 0x1623D3C))(this, reader);
	}

};

