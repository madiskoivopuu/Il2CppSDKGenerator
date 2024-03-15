#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggroTargetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AggroTargetData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AggroTargetData*, uintptr_t))(Il2CppBase() + 0x129C10C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AggroTargetData*, uintptr_t))(Il2CppBase() + 0x129C160))(this, reader);
	}

};

