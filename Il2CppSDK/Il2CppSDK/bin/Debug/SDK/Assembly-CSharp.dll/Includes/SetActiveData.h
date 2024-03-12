#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetActiveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetActiveData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsActive() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SetActiveData*, uintptr_t))(Il2CppBase() + 0x1623CE8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SetActiveData*, uintptr_t))(Il2CppBase() + 0x1623D3C))(this, reader);
	}

};

}
