#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyQuestData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = NotifyQuestPhase> R& Phase() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(NotifyQuestData*, uintptr_t))(Il2CppBase() + 0x13C6154))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(NotifyQuestData*, uintptr_t))(Il2CppBase() + 0x13C61C4))(this, reader);
	}

};

