#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PassPrerequisiteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PassPrerequisiteData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Grade() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PassPrerequisiteData*, uintptr_t))(Il2CppBase() + 0x11E96E0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PassPrerequisiteData*, uintptr_t))(Il2CppBase() + 0x11E9734))(this, reader);
	}

};

