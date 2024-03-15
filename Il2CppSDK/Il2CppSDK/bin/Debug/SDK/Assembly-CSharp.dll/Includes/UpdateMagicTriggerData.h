#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateMagicTriggerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMagicTriggerData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& SkipCount() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& UseCount() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UpdateMagicTriggerData*, uintptr_t))(Il2CppBase() + 0x153EDCC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(UpdateMagicTriggerData*, uintptr_t, bool))(Il2CppBase() + 0x153EE20))(this, reader, checkAvailableBytes);
	}

};

