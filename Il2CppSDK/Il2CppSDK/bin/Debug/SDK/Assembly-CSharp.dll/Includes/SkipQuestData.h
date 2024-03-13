#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkipQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkipQuestData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ServiceMessage*> T& Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SkipQuestData*, uintptr_t))(Il2CppBase() + 0x1483644))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SkipQuestData*, uintptr_t))(Il2CppBase() + 0x1483698))(this, reader);
	}

};

