#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueAnswerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueAnswerData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DialogueAnswerData*, uintptr_t))(Il2CppBase() + 0xEC3304))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DialogueAnswerData*, uintptr_t))(Il2CppBase() + 0xEC3358))(this, reader);
	}

};

