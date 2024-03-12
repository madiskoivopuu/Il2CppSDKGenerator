#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyQuestData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DestroyQuestData*, uintptr_t))(Il2CppBase() + 0xEBEC5C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(DestroyQuestData*, uintptr_t, bool))(Il2CppBase() + 0xEBEC80))(this, reader, checkAvailableBytes);
	}

};

}
