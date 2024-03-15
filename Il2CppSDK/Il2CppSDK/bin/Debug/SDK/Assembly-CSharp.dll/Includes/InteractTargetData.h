#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractTargetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractTargetData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(InteractTargetData*, uintptr_t))(Il2CppBase() + 0x146A728))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(InteractTargetData*, uintptr_t))(Il2CppBase() + 0x146A77C))(this, reader);
	}

};

