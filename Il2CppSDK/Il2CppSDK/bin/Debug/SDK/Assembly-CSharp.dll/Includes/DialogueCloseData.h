#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueCloseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueCloseData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DialogueCloseData*, uintptr_t))(Il2CppBase() + 0xEC3B4C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DialogueCloseData*, uintptr_t))(Il2CppBase() + 0xEC3B90))(this, reader);
	}

};

}
