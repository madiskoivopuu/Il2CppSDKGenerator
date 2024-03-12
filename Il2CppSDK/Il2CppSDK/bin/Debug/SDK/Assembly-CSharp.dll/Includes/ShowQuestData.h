#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowQuestData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ShowQuestData*, uintptr_t))(Il2CppBase() + 0x147ED44))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ShowQuestData*, uintptr_t))(Il2CppBase() + 0x147ED80))(this, reader);
	}

};

}
