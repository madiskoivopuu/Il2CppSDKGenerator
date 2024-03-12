#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyQuestData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Phase() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(NotifyQuestData*, uintptr_t))(Il2CppBase() + 0x13C6154))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(NotifyQuestData*, uintptr_t))(Il2CppBase() + 0x13C61C4))(this, reader);
	}

};

}
