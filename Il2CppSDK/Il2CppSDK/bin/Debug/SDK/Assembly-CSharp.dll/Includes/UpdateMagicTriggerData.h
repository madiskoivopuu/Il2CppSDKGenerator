#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateMagicTriggerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMagicTriggerData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SkipCount() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& UseCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UpdateMagicTriggerData*, uintptr_t))(Il2CppBase() + 0x153EDCC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(UpdateMagicTriggerData*, uintptr_t, bool))(Il2CppBase() + 0x153EE20))(this, reader, checkAvailableBytes);
	}

};

