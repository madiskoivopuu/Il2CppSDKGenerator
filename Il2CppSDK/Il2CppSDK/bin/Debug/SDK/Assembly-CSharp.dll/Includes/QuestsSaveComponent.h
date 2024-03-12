#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestsSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSaveComponent"));
	}

	template <typename T = int32_t> T& Version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(QuestsSaveComponent*, uintptr_t))(Il2CppBase() + 0x170817C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(QuestsSaveComponent*, uintptr_t))(Il2CppBase() + 0x170821C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(QuestsSaveComponent*, uintptr_t))(Il2CppBase() + 0x17082D0))(this, writer);
	}

};

}
