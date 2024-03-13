#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPriorityTargetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetPriorityTargetData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SetPriorityTargetData*, uintptr_t))(Il2CppBase() + 0x162485C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SetPriorityTargetData*, uintptr_t))(Il2CppBase() + 0x16248A0))(this, reader);
	}

};

