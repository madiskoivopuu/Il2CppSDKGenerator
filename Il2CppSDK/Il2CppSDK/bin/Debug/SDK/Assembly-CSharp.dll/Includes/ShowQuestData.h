#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowQuestData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ShowQuestData*, uintptr_t))(Il2CppBase() + 0x147ED44))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ShowQuestData*, uintptr_t))(Il2CppBase() + 0x147ED80))(this, reader);
	}

};

