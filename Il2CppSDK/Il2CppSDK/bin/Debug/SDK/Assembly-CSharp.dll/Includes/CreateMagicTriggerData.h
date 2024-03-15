#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateMagicTriggerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMagicTriggerData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& UseCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& SkipCount() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CreateMagicTriggerData*, uintptr_t))(Il2CppBase() + 0x1BCC90C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreateMagicTriggerData*, uintptr_t))(Il2CppBase() + 0x1BCCA00))(this, writer);
	}

};

