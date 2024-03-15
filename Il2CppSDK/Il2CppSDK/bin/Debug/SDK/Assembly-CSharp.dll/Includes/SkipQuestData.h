#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkipQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkipQuestData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ServiceMessage> R& Result() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SkipQuestData*, uintptr_t))(Il2CppBase() + 0x1483644))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SkipQuestData*, uintptr_t))(Il2CppBase() + 0x1483698))(this, reader);
	}

};

