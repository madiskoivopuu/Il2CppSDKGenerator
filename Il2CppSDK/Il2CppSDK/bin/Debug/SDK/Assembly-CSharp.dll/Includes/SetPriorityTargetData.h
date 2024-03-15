#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPriorityTargetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetPriorityTargetData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetPriorityTargetData*, uintptr_t))(Il2CppBase() + 0x162485C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetPriorityTargetData*, uintptr_t))(Il2CppBase() + 0x16248A0))(this, reader);
	}

};

