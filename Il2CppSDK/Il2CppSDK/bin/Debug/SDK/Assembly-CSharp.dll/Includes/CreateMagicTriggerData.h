#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateMagicTriggerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMagicTriggerData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& UseCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SkipCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CreateMagicTriggerData*, uintptr_t))(Il2CppBase() + 0x1BCC90C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CreateMagicTriggerData*, uintptr_t))(Il2CppBase() + 0x1BCCA00))(this, writer);
	}

};

