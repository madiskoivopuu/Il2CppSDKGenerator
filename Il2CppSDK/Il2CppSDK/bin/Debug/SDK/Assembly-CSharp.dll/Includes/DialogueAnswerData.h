#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueAnswerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueAnswerData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DialogueAnswerData*, uintptr_t))(Il2CppBase() + 0xEC3304))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DialogueAnswerData*, uintptr_t))(Il2CppBase() + 0xEC3358))(this, reader);
	}

};

