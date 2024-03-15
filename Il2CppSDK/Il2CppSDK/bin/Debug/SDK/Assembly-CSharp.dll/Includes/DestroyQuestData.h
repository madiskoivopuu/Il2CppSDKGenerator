#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyQuestData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DestroyQuestData*, uintptr_t))(Il2CppBase() + 0xEBEC5C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(DestroyQuestData*, uintptr_t, bool))(Il2CppBase() + 0xEBEC80))(this, reader, checkAvailableBytes);
	}

};

